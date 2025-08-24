//b87678

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

const long long MOD = 1e9 + 7;
long long modpow(long long a, long long b) {
    long long res = 1;
    a=a%MOD;
    while (b > 0) {
        if (b & 1) res = (res * a) %MOD;
        a = (a * a) %MOD;
        b >>= 1;
    }
    return res;
}

long long modinv(long long q) {
    return modpow(q, MOD - 2);
}

void vulture(){
int n;
cin>>n;// num of s=i



for(int i = 1; i <= n; i++) {
    int ts = n-i;

}
}
signed main(){
input_tej_le;
int t;
cin>>t;
while(t--){
vulture();
}
}