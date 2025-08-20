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
==========================================================
Author: Vaidik Saxena
From : IIITL
==========================================================
*/


int check(vector<int> &a, int k) {
         int s=0;
        int e=0;
        for(int i = 0;i<a.size();i++){
            s = max(s, a[i]);
            e += a[i];
        }
        int ans=0;
        while(s<e){
            int mid = s+(e-s)/2;
            int sum=0;
            int p = 1;
            for(int n:a){
                if(sum+n<=mid){
                    sum = sum+ n;

                }else{
                    sum = n;
                    p++;
                }
            }if(p<=k){
                e = mid;
            }else{
                s=mid+1;
            }
            
        }

        return e;
    }
void vulture(){
int n;
cin>>n;
int k;
cin>>k;
vector<int> a(n);
vin(a,a.size());
int ans = check(a,k+1);
cout<<ans<<endl;
}
signed main(){
input_tej_le;
int t=1;
// cin>>t;
while(t--){
vulture();
}
}