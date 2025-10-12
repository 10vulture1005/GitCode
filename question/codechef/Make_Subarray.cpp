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
string st;
cin>>st;
int s = -1,e=n+1;
for(int i = 0; i < n; i++) {
    if(s==-1 and st[i]=='1')s=i;
    if(st[i]=='1')e=i;
}

if(s==-1){
    cout<<0<<endl;
    return;

}
int ans = 0;
for(int i = s; i < e; i++) {
    if(st[i]=='0')ans++;
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