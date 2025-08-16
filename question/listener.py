import http.server
import json
import os

PORT = 8080  # use the port you set in Competitive Companion

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
        elif "codechef" in url:
            folder = "codechef"
        elif "cses.fi" in url:
            folder = "cses"
        else:
            folder = "others"

        os.makedirs(folder, exist_ok=True)
        filename = f"{folder}/{problem}.cpp"

        template = f"""#include <bits/stdc++.h>
using namespace std;

int main() {{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // {data["url"]}

    return 0;
}}
"""
        with open(filename, "w") as f:
            f.write(template)

        print(f"✅ Saved: {filename}")

        # respond OK
        self.send_response(200)
        self.end_headers()
        self.wfile.write(b"OK")

server = http.server.HTTPServer(("localhost", PORT), Handler)
print(f"Listening on port {PORT}...")
server.serve_forever()
