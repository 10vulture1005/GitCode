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
int mi = 1;
int ma = n;
int s=0;
int e =n-1;
while(s<n and e>0){
if(a[s]==mi){

    s++;
    mi++;
}
else if(a[s]==ma){
    ma--;
    s++;
}
else if(a[e]==mi){
    // cout<<mi<<endl;
    mi++;
    // cout<<mi<<endl;
    e--;

}
else if(a[e]==ma){
    ma--;
    e--;
}else{

    break;
}
}
if(e==0 or s==n){
    cout<<-1<<endl;
}else{
    cout<<s+1<<' '<<e+1<<endl;
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