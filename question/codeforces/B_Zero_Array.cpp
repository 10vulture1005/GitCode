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
int max = *max_element(a.begin(),a.end());
int sum = accumulate(a.begin(),a.end(),0LL);
if(sum%2==0){
if(sum>=2*max){
    yes
}else no
}else no
}
signed main(){
input_tej_le;
int t=1;
// cin>>t;
while(t--){
vulture();
}
}