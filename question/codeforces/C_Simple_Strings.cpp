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
/*
 ██████     ██████     ██████
██         ██     ██   ██    ██
██   ███   ██     ██   ██    ██
██    ██   ██     ██   ██    ██
 ██████     ██████     ██████
==========================================================
Author: Vaidik Saxena
From : IIITL
==========================================================
*/
void vulture()
{
    string s;
    cin >> s;
    int n = s.size();
    if(n==1){
        cout<<s<<endl;return;
    }if(n==2){
        if(s[0]==s[1]){
            s[0]='a';
            while(s[0]==s[1]){
                s[0]++;
            }
        }
        cout<<s<<endl; return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            s[i + 1] = 'a';
            if (i + 2 < n)
            {
                while (s[i + 2] == s[i + 1] or s[i] == s[i + 1])
                {
                    s[i + 1]++;
                }
            }
        }
    }

    if(s[n - 1] == s[n - 2] or s[n - 2] == s[n - 3]){
        s[n-2]='a';
    }
    
    while (s[n - 1] == s[n - 2] or s[n - 2] == s[n - 3])
    {
        s[n-2]++;
    }
    cout << s << endl;
}
signed main()
{
    input_tej_le;
    int t = 1;
    // cin>>t;
    while (t--)
    {
        vulture();
    }
}