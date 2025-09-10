#include <bits/stdc++.h>
using namespace std;

struct State {
    int x, y, d;
    bool operator<(const State &o) const {
        if (x != o.x) return x < o.x;
        if (y != o.y) return y < o.y;
        return d < o.d;
    }
};

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    int n;
    cin >> n;

    set<State> curr, next;
    // Step 1: first move can be in any direction
    for (int d = 0; d < 4; d++) {
        curr.insert({dx[d], dy[d], d});
    }

    for (int step = 2; step <= n; step++) {
        next.clear();
        for (auto s : curr) {
            // turn left and right
            for (int t = -1; t <= 1; t += 2) {
                int nd = (s.d + t + 4) % 4;
                int nx = s.x + dx[nd];
                int ny = s.y + dy[nd];
                next.insert({nx, ny, nd});
            }
        }
        curr.swap(next);
    }

    // Collect unique positions
    set<pair<int,int>> pos;
    for (auto s : curr) pos.insert({s.x, s.y});

    cout << pos.size() << "\n";
}
