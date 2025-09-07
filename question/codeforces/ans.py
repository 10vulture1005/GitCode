from typing import List, Set

class Trie:
    def __init__(self):
        self.end = False
        self.next = {}

def insert_word(root: Trie, word: str) -> None:
    cur = root
    for c in word:
        if c not in cur.next:
            cur.next[c] = Trie()
        cur = cur.next[c]
    cur.end = True

# 8 directions: up, down, left, right, diagonals
dirs = [(1,0), (-1,0), (0,1), (0,-1),
        (1,1), (1,-1), (-1,1), (-1,-1)]

def dfs(board: List[List[str]], x: int, y: int, node: Trie, path: List[str], res: Set[str]):
    c = board[x][y]
    if c not in node.next:
        return

    node = node.next[c]
    path.append(c)

    if node.end:
        res.add("".join(path))

    # mark visited
    board[x][y] = "#"

    for dx, dy in dirs:
        nx, ny = x + dx, y + dy
        if 0 <= nx < len(board) and 0 <= ny < len(board[0]) and board[nx][ny] != "#":
            dfs(board, nx, ny, node, path, res)

    # backtrack
    board[x][y] = c
    path.pop()

def solve_problem(rows: int, cols: int, board: List[List[str]], words: List[str]) -> None:
    root = Trie()
    for w in words:
        insert_word(root, w)

    found = set()
    path = []

    for i in range(rows):
        for j in range(cols):
            dfs(board, i, j, root, path, found)

    if not found:
        print(0)
        return

    ans = sorted(found)
    print(len(ans))
    for w in ans:
        print(w)

if __name__ == "__main__":
    R, C = map(int, input().split())
    board = [list(input().strip().replace(" ", "")) for _ in range(R)]
    n = int(input())
    words = [input().strip() for _ in range(n)]
    solve_problem(R, C, board, words)
