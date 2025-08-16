import http.server
import json
import os
import subprocess

PORT = 8080  # must match Competitive Companion extension

BASE_DIR = os.path.abspath(".")

class Handler(http.server.BaseHTTPRequestHandler):
    def do_POST(self):
        content_length = int(self.headers["Content-Length"])
        body = self.rfile.read(content_length)
        data = json.loads(body.decode("utf-8"))
        print("Received:", data)

        # Detect site from URL
        url = data.get("url", "").lower()
        problem = data["name"].replace(" ", "_").replace(".", "")

        if "codeforces" in url:
            folder = "codeforces"
            suffix = "_codeforces"
        elif "codechef" in url:
            folder = "codechef"
            suffix = "_codechef"
        elif "cses.fi" in url:
            folder = "cses"
            suffix = "_cses"
        else:
            folder = "others"
            suffix = "_others"

        # Folder where file should be saved
        save_dir = os.path.join(BASE_DIR, folder)
        os.makedirs(save_dir, exist_ok=True)

        # Add suffix to filename
        filename = os.path.join(save_dir, f"{problem}{suffix}.cpp")

        template = f"""#include <bits/stdc++.h>
using namespace std;

int main() {{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // {data["url"]}

    return 0;
}}
"""
        with open(filename, "w", encoding="utf-8") as f:
            f.write(template)

        print(f"✅ Saved directly to: {filename}")

        # Open in VS Code
        try:
            subprocess.Popen(["code", "-r", filename])
            print(f"📂 Opened in VS Code: {filename}")
        except Exception as e:
            print("⚠️ Could not open file in VS Code:", e)

        # Respond OK
        self.send_response(200)
        self.end_headers()
        self.wfile.write(b"OK")

server = http.server.HTTPServer(("localhost", PORT), Handler)
print(f"Listening on port {PORT}...")
server.serve_forever()
