#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (char c : s) {
            if (c == '0') ++cnt0;
            else if (c == '1') ++cnt1;
            else ++cnt2;
        }

        // feasible number of top removals a lies in [a_min, a_max]
        int a_min = max(cnt0, k - (cnt1 + cnt2));
        int a_max = min(cnt0 + cnt2, k - cnt1);

        string ans(n, '-');

        for (int i = 1; i <= n; ++i) {
            // card i (1-indexed) remains after k removals if:
            // a+1 <= i <= n-k+a  for some a in [a_min, a_max]
            // equivalent: a in [i-(n-k), i-1]
            int needL = i - (n - k);
            int needR = i - 1;
            int L = max(a_min, needL);
            int R = min(a_max, needR);

            if (L <= R) {
                // possible to remain for some a -> now check if it remains for ALL a in [a_min,a_max]
                // card i is present for all a iff i in [a_max+1, n-k+a_min]
                int presentAllL = a_max + 1;
                int presentAllR = (n - k) + a_min;
                if (presentAllL <= presentAllR && i >= presentAllL && i <= presentAllR) ans[i - 1] = '+';
                else ans[i - 1] = '?';
            } else {
                ans[i - 1] = '-';
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
