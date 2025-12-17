#include <bits/stdc++.h>
#include <unordered_set>
#define int long long
#define gcd(a, b) (__gcd(a, b))
#define vin(a,n) for(int i=0;i<n;++i) cin>>a[i];
#define vout(a,n) for(int i=0;i<n;++i) cout<<a[i]<<' ';
#define all(a) (a.begin(), a.end()); 
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define vi vector<int>
#define input_tej_le ios::sync_with_stdio(false); cin.tie(NULL);
using namespace  std;
/*
==========================================================
Author: Vaidik Saxena
From : IIITL
==========================================================
*/


string getLCS(string &a, string &b, vector<vector<int>> &dp) {
    int i = a.size(), j = b.size();
    string lcsStr;

    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            lcsStr.push_back(a[i - 1]);
            --i; --j;
        } 
        else if (dp[i - 1][j] > dp[i][j - 1])
            --i;
        else
            --j;
    }

    reverse(lcsStr.begin(), lcsStr.end());
    return lcsStr;
}




void vulture(){
string s1, s2;
    cin >> s1;
    cin >> s2;

    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    string ans = getLCS(s1,s2,dp);
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
}
signed main(){
input_tej_le;
int t=1;
// cin>>t;
while(t--){
vulture();
}
}