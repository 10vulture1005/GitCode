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
string s;
cin>>s;
int ct = count(s.begin(),s.end(),'0');
int np0 = 0;
bool p=1;
for(int i = 0; i < n; i++) {
    if(s[i]!=s[n-i-1]){
        p=0;
    }
}
if(p){
    if(ct%2==0){
cout<<"BOB"<<endl;
}else{
if(ct==1){
    cout<<"BOB"<<endl;
}else{
    cout<<"ALICE"<<endl;
}
}
return;
}
for(int i = 0; i < n/2; i++) {
    if((s[i]=='0' and s[n-i-1]=='1') or ((s[i]=='1' and s[n-i-1]=='0')))
    np0++;
}
if(ct==2 and np0==1){
    cout<<"DRAW"<<endl;
}else{
        cout<<"ALICE"<<endl;

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