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
string a,b;
cin>>a>>b;
vector<int> pa(n);// for 0s
vector<int> pbs(n);
for(int i = 0; i < n; i++) {
    if(i==0){
        pa[0]=a[i]=='1'?0:1;
        pbs[0]=b[i]=='1'?0:1;
        continue;
    }
    if(a[i]=='0'){
        pa[i]=pa[i-1]+1;
    }else{
                pa[i]=pa[i-1];

    }
    if(b[i]=='0'){
        pbs[i]=pbs[i-1]+1;
    }else{
                pbs[i]=pbs[i-1];

    }
}
vector<int> idx;


for(int i = 0; i < n; i++) {
    if(pa[i]==pbs[i] and pa[i]==i+1-pa[i]){
        idx.pb(i);
    }
}


bool f = 0;
            if(pa[0]>pbs[0]){
                f=1;
            }else{
                f=0;
            }
        
int j = 0;
// for(int i = 0; i <n;i++){
// cout<<pa[i]<<" "<<pbs[i]<<endl;
// }
// cout<<endl;

// vout(idx,idx.size());cout<<endl;
if(idx.size()!=0){
for(int i = 1; i <= idx[idx.size()-1]; i++) {
if(j>=idx.size())break;
    if(i==idx[j]){
        if(idx[j++]<n-1){
            if(pa[i+1]>pbs[i+1]){
                f=1;
            }else if(pa[i+1]<pbs[i+1]){
                f=0;
            }else{
                continue;
            }
            continue;
        }
    }








    if(f){
        if(((pa[i]+pbs[i]==i+1) and pa[i]>=pbs[i]) or ((pa[i]-pbs[i]==0) and pa[i]==pbs[i])){
            continue;
        }else{
            no 
            return;
        }
    }else{
        if(((pa[i]+pbs[i]==i+1) and pa[i]<=pbs[i]) or (((pa[i]-pbs[i]==0) and pa[i]==pbs[i]))){
            continue;
        }else{
            no 

            return;
        }
    }
}


for(int i = idx[idx.size()-1]+1; i < n; i++) {
    if(pa[i]!=pbs[i]){
        no
        return;
    }
}
yes
}else{
for(int i = 0; i < n; i++) {
    if(pa[i]!=pbs[i]){
        no 
        return;
    }
}
yes
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