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
void vulture(){
int n;
cin>>n;
string s,a,t;
cin>>s;
int k;
cin>>k;
cin>>a>>t;
string ans="";
for(int i = 0; i < k; i++) {
    if(t[i]=='V'){
        ans.pb(a[i]);
    }
}
reverse all(ans);
ans+=s;
for(int i = 0; i < k; i++) {
    if(t[i]=='D')
    ans.pb(a[i]);
}
cout<<ans<<endl;
}
signed main(){
input_tej_le;
int t;
cin>>t;
while(t--){
vulture();
}
}