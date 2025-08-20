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
vector<int> a(n);
vin(a,a.size());
map<int,int> m;
map<int,int> str;
for(int i = 0; i < n; i++) {
    m[a[i]]++;
    str[a[i]];

}

int prv = 0;
int ans = 0;
int p = 0;
for(auto it:str){
if(it.first!=p+1){
    prv=0;
    
    
}
p=it.first;
int x = m[it.first];
ans+=max(0LL,x-prv);
prv = x;
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