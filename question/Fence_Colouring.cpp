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
int n;;
cin>>n;
vector<int> a(n);
vin(a,a.size());
vector<int> f(n+1);
for(int i = 0; i < n; i++) {
    f[a[i]]++;
}
auto max = max_element(f.begin(),f.end());
if(*max==f[1]){
int ans = 0;
for(int i = 0; i < n; i++) {
    if(a[i]!=1){
        ans++;
    }
}
cout<<ans<<endl;
}else{
    int index = distance(f.begin(), max);
    int ans = 1;
    for(int i = 0; i < n; i++) {
        if(a[i]!=index){
            ans++;
        }
    }
    cout<<ans<<endl;
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