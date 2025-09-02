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
vector<pair<int,int>> b;
for(int i = 0; i < n; i++) {
    if(a[i]<i+1){
        b.pb({a[i],i+1});
    }
}
n = b.size();

vector<int> suf(n);
for(int i = n-1;i>=0;i--){
auto it = lower_bound(
    b.begin(), b.end(),
    b[i].first,
    [](const pair<int,int>& p, int val) {
        return p.second < val;
    }
);



if(it!=b.end()){
if((*it).second<b[i].first){
suf[it-b.begin()]++;
}else{
    if(it!=b.begin()){
    it--;
    if((*it).second < b[i].first){
        suf[it-b.begin()]++;
    }
}
}
}
}
for(int i = n-2;i>=0;i--){
suf[i] += suf[i+1];
}
int sum = accumulate(suf.begin(),suf.end(),0LL);

cout<<sum<<endl;




}
signed main(){
input_tej_le;
int t;
cin>>t;
while(t--){
vulture();
}
}