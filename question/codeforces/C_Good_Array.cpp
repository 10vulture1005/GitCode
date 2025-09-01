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
vector<pair<int,int>> a(n);
for(int i = 0; i < n; i++) {
    cin>>a[i].first;
    a[i].second=i+1;
}
vector<int> b(n);
if(n==2){
    cout<<0<<endl;return;
}

vector<int> ans;
sort all(a);
for(int i = 0; i < n; i++) {
    b[i] = a[i].first;
}int sum = accumulate(b.begin(),b.end(),0LL);

for(int i = 0; i < n; i++) {
    sum-=b[i];
    if(sum%2==0){
        
        int ts = sum/2;
        auto it = lower_bound(b.begin(),b.end(),ts);
        if(it!=b.end() and *it==ts){        

            if(it-b.begin()!=i){
            ans.pb(a[i].second);
       }
            else if(it-b.begin()<n-1 and b[it-b.begin()+1]==*it){
                            ans.pb(a[i].second);

            }
        }
    }
    sum+=b[i];

}
if(ans.size()==0){
    cout<<0<<endl;return;
}
cout<<ans.size()<<endl;
for(int i = 0; i <ans.size();i++){
cout<<ans[i]<<" ";
}
cout<<endl;
}
signed main(){
input_tej_le;
int t=1;
// cin>>t;
while(t--){
vulture();
}
}