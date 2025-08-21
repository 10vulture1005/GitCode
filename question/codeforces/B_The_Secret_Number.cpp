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
int p=10;
vector<int> ans;
while(n>=p+1){
    if(n%(p+1)==0){
        ans.pb(n/(p+1));
    }    p*=10;

}
if(ans.size()==0){
    cout<<ans.size()<<endl;return;
}
cout<<ans.size()<<endl;
reverse all(ans);
for(int i = 0; i <ans.size();i++){
cout<<ans[i]<<" ";
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