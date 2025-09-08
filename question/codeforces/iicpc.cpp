#include <bits/stdc++.h>
using namespace std;
#include <unordered_set>


struct Trie {
    bool end;
    unordered_map<char, Trie*> next;
    Trie() : end(false) {}
};

void insert_word(Trie* root, const string& word) {
    Trie* cur = root;
    for (char c : word) {
        if (!cur->next.count(c)) {
            cur->next[c] = new Trie();
        }
        cur = cur->next[c];
    }
    cur->end = true;
}

int dirs[8][2] = {
    {1, 0}, {-1, 0}, {0, 1}, {0, -1},
    {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};

void dfs(vector<string>& board, int x, int y, Trie* node, string& path, unordered_set<string>& res) {
    char c = board[x][y];
    if (!node->next.count(c)) return;

    node = node->next[c];
    path.push_back(c);

    if (node->end) res.insert(path);

    // mark visited
    board[x][y] = '#';

    for (auto& d : dirs) {
        int nx = x + d[0], ny = y + d[1];
        if (nx >= 0 && nx < (int)board.size() &&
            ny >= 0 && ny < (int)board[0].size() &&
            board[nx][ny] != '#') {
            dfs(board, nx, ny, node, path, res);
        }
    }

    // backtrack
    board[x][y] = c;
    path.pop_back();
}

void solve_problem(int R, int C, vector<string>& board, vector<string>& words) {
    Trie* root = new Trie();
    for (auto& w : words) insert_word(root, w);

    unordered_set<string> found;
    string path;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            dfs(board, i, j, root, path, found);
        }
    }

    if (found.empty()) {
        cout << 0 << "\n";
        return;
    }

    vector<string> ans(found.begin(), found.end());
    sort(ans.begin(), ans.end());

    cout << ans.size() << "\n";
    for (auto& w : ans) cout << w << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R, C;
    cin >> R >> C;
    vector<string> board(R);
    for (int i = 0; i < R; i++) {
        string row;
        cin >> row;
        board[i] = row;
    }

    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    solve_problem(R, C, board, words);
    return 0;
}
