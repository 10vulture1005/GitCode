#include <bits/stdc++.h>
#include <unordered_set>
// #define int long long
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
void vulture(){
    int n,x;
    cin>>n>>x;
    vector<int> p(n);
    vector<int> c(n);
    vin(c,n);
    vin(p,n);
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=x;j++){
            dp[i][j] = dp[i-1][j];
            if(c[i-1]<=j){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-c[i-1]]+p[i-1]);
            } 
        }   
    }
    cout<<dp[n][x]<<endl;
    
    
}
signed main(){
input_tej_le;
int t=1;
// cin>>t;
while(t--){
vulture();
}
}