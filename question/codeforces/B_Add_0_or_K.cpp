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
int n,k;
cin>>n>>k;
vector<int> a(n);
vin(a,a.size());
if(k%2==0){
    if(k==2){
        for(int i = 0;i<n;i++){
        for(int j = 1;j<100;j++){
        if(a[i]%3==0){
            break;
        }
        a[i]+=k;
        }
        }for(int i = 0; i <n;i++){
        cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }
for(int i = 0;i<n;i++){
a[i]+=(k-1-a[i]%(k-1))*k;
}
for(int i = 0; i <n;i++){
cout<<a[i]<<" ";
}
cout<<endl;
}else{
    for(int i = 0; i < n; i++) {
        if(a[i]%2){
            a[i]+=k;
        }
    }
    for(int i = 0; i <n;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;
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