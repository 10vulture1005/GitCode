#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, W;
    cin >> n >> W;

    vector<int> wt(n + 1), val(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> wt[i];
    for (int i = 1; i <= n; i++)
        cin >> val[i];

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            dp[i][w] = dp[i - 1][w];
            if (wt[i] <= w)
            {
                dp[i][w] = max(dp[i][w], dp[i - 1][w - wt[i]] + val[i]);
            }
        }
    }

    cout << dp[n][W] << endl;
}
signed main()
{

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
