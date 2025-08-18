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
int ct = count(a.begin(),a.end(),a[0]);
if(ct==n){
    no
    return;
}
yes
// for(int i = 0;i<n;i++){
// for(int j = i+1;j<n;j++){
// if(a[i]!=a[j]){
//     cout<<i+1<<' '<<j+1<<endl;
//     break;
// }
// }
// }
map<int,int> m;
for(int i = 0; i < n; i++) {
    m[a[i]]++;
}
pair<int,int> mi={1e9,1e9};
for(auto it:m){
if(mi.second>it.second){
    mi.second = it.second;
    mi.first=it.first;
}
}
for(int i = 0; i < n; i++) {
    if(mi.first==a[i]){
        mi.second=i;
        break;
    } 
}

for(int i = 0; i < n; i++) {
    if(mi.first!=a[i]){
        cout<<mi.second+1<<' '<<i+1<<endl;
    }
}

for(int i = 0;i<n;i++){
    if(i==mi.second)continue;
    if(a[i]!=mi.first)continue;
for(int j = 0;j<n;j++){
if(a[j]!=mi.first){
    cout<<j+1<<' '<<i+1<<endl;
    break;
}
}
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