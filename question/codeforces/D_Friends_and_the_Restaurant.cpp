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
vector<int> x(n);// price
vector<int> y(n);//budget
vin(x,x.size());
vin(y,y.size());
vector<pair<int,int>> a(n);
for(int i = 0; i < n; i++) {
    a[i].first=x[i];
    a[i].second=y[i];
}

    sort(a.begin(), a.end(), [](auto &q, auto &b) {
        return (-q.second + q.first) < (-b.second + b.first);
    });

    vector<int> diff(n);
    for(int i = 0; i <n;i++){
    diff[i]=a[i].second-a[i].first;

    }
    reverse all(diff)
    // for(int i = 0; i <n;i++){
    // cout<<diff[i]<<" ";
    // }
    // cout<<endl;
    vector<bool> use(n);
    int ans = 0;
    int s=0;
    int e = n-1;
    int req = 0;
    int sur = 0;
    while(s<e){
        if(diff[s]+diff[e]>=0){
            use[e]=1;
            use[s]=1;
            e--;
            s++;
            ans++;
            

        }else{
            req+=diff[s++];
            sur+=diff[e];

        }
    }
    if(sur+req>=0 and sur!=0 and req!=0){
        ans++;
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