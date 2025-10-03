#include <bits/stdc++.h>
#include <unordered_set>
#define int long long
#define gcd(a, b) (__gcd(a, b))
#define vin(a, n)               \
    for (int i = 0; i < n; ++i) \
        cin >> a[i];
#define vout(a, n)              \
    for (int i = 0; i < n; ++i) \
        cout << a[i] << ' ';
#define all(a) (a.begin(), a.end());
#define pb push_back
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define vi vector<int>
#define input_tej_le             \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void vulture()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vin(a, a.size());
    sort all(a);
 






    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {

        auto it2 = upper_bound(a.begin(), a.end(), a[i] + k)-a.begin();
        it2--;
        if(it2!=i ){
            ans = max(ans,it2-i+1);
        }
        
        // cout<<*it2<<endl;
    }
        

    cout << ans << endl;
}
signed main()
{
    input_tej_le;
    int t;
    cin >> t;
    while (t--)
    {
        vulture();
    }
}