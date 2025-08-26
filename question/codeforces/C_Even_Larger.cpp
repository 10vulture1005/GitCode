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
int ops = 0;
for(int i = 0; i < n; i+=2) {
    if(i-1>=0 and i+1<n){
        ops+=max(0LL,a[i]-min(a[i-1],a[i+1]));
        a[i]=min(a[i-1],a[i+1]);    
    }
    if(i==0){
        ops+=max(0LL,a[i]-a[i+1]);
        a[i]=a[i+1];
    }
    if(i==n-1){
        ops+=max(0LL,a[i]-a[i-1]);
        a[i]=a[i-1];
    }
}
for(int i = 1; i < n; i+=2) {
    if(i-1>=0 and i+1<n){
        if(a[i]==a[i-1] and a[i]==a[i+1]){
            ops+=a[i];
    }
}
}
cout<<ops<<endl;
}
signed main(){
input_tej_le;
int t;
cin>>t;
while(t--){
vulture();
}
}