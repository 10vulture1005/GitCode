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
string a;
cin>>a;

map<char,int> m;
int ans = 1e9;
for(int i = 0; i < n; i++) {
    m[a[i]]++;
}
for(auto it:m){
    int ct = 0;
    int s = 0;
int e = n-1;
while(s<e){
    if(a[s]==a[e]){
        s++;
        e--;
    }else if(a[e]==it.first){
        e--;
        ct++;
    }else if(a[s]==it.first){

        s++;
        ct++;
    }else{
        ct = 1e9;
        break;
    }
}   
// cout<<it.first<<' '<<ct<<endl;

ans = min(ans,ct);
}


if(ans==1e9){
    cout<<-1<<endl;
    return;
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