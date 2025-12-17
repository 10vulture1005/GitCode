
#include <bits/stdc++.h>
using namespace std;
#define int long long
bool ispossible(const vector<string> &grid, int row, int col, int n)
{

    for (int r = 0; r < row; ++r)
        if (grid[r][col] == 'Q')
            return false;

    for (int r = row - 1, c = col - 1; r >= 0 && c >= 0; --r, --c)
        if (grid[r][c] == 'Q')
            return false;

    for (int r = row - 1, c = col + 1; r >= 0 && c < n; --r, ++c)
        if (grid[r][c] == 'Q')
            return false;
    return true;
}

void solver(int row, vector<string> &grid, vector<vector<string>> &solutions, int n)
{
    if (row == n)
    {
        solutions.push_back(grid);
        return;
    }
    for (int col = 0; col < n; ++col)
    {
        if (ispossible(grid, row, col, n))
        {
            grid[row][col] = 'Q';
            solver(row + 1, grid, solutions, n);
            grid[row][col] = '.';
        }
    }
}

vector<vector<string>> res(int n)
{
    vector<vector<string>> solutions;
    vector<string> grid(n, string(n, '.'));
    solver(0, grid, solutions, n);
    return solutions;
}

int32_t main()
{
    int n;
    cin>>n;

    auto solutions = res(n);
    cout << "Found " << solutions.size() << " solution(s) for n = " << n << "\n\n";

    int toPrint = min<int>(solutions.size(), 10);
    for (int i = 0; i < toPrint; ++i)
    {
        cout << "Solution #" << i + 1 << ":\n";
        for (auto &row : solutions[i])
            cout << row << '\n';
        cout << '\n';
    }
    if (solutions.size() > toPrint)
        cout << " ... (printed " << toPrint << " of " << solutions.size() << ")\n";

}
