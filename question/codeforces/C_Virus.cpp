#include <bits/stdc++.h>
#include <unordered_set>
#define int long long
#define gcd(a, b) (__gcd(a, b))
#define vin(a,n) for(int i=0;i<n;++i) cin>>a[i];
#define vout(a,n) for(int i=0;i<n;++i) cout<<a[i]<<' ';cout<<endl;
#define all(a) (a.begin(), a.end()); 
#define allr(a) (a.rbegin(), a.rend()); 
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
int n,m;
cin>>n>>m;
vector<int> a(m);
vin(a,a.size());
sort all(a);
vector<int> d;
d.pb(n-a[m-1]+a[0]-1);
for(int i = 1; i < m; i++) {
    d.pb(a[i]-a[i-1]-1);  
}
sort allr(d);
int ans = n;
int c = 0;
// vout(d,d.size())
for(int i = 0; i < d.size(); i++) {
    int v = d[i]-2*c-1;
    if(d[i]-2*c==1){
        ans--;
    }
    c+=2;
    if(v<0){
        continue;
    }ans-=v;
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