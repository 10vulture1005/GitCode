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
vector<int> idx(n,-1);
int pr = 0;
int idxs = 0;
for(int i = 0; i < n; i++) {
    if(a[pr]!=a[i]){
        idx[pr]=i+1;
        pr = i;
        idxs=pr+1;
    }
}
for(int i = 1; i < pr; i++) {
    if(idx[i]==-1){
        idx[i]=idx[i-1];
    }
}
// for(int i = 0; i <n;i++){
// cout<<idx[i]<<" ";
// }
// cout<<endl;


int q;
cin>>q;
while(q--){
    int l,r;
    cin>>l>>r;
    if(idx[l-1]<=r and idx[l-1]!=-1){
        cout<<l<<' '<<idx[l-1]<<endl;
    }else{
        cout<<"-1 -1"<<endl;
    }
      
}
cout<<endl;
}
signed main(){
input_tej_le;
int t;
cin>>t;
while(t--){
vulture();
}
}