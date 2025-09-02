#include <bits/stdc++.h>
#include <unordered_set>
#define int long long
#define gcd(a, b) (__gcd(a, b))
#define vin(a,n) for(int i=0;i<n;++i) cin>>a[i];
#define vout(a,n) for(int i=0;i<n;++i) cout<<a[i]<<' ';
#define all(a) (a.rbegin(), a.rend()); 
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
    string s;
    cin>>s;
map<char,int> m;

for(int i = 0; i < s.size(); i++) {
    m[s[i]]++;
}

int n = m.size();
vector<pair<int,char>> fr(n);

int i = 0;
for(auto it:m){
fr[i].first = it.second;
fr[i++].second = it.first;
}
sort all(fr);
int l = 0;
for(int i = 0; i <n;i++){
cout<<fr[i].first<<' '<<fr[i].second<<endl;
}
cout<<endl;
int r = 1;
string ans = "";
while(l<n and r<n){
if(fr[l].first==0){
    l++;
    if(l==r){
        r++;
    }
}if(fr[r].first==0){
    r++;
}
while(min(fr[l].first,fr[r].first) and l<n and r<n){
    ans+=(fr[l].second+fr[r].second);
    fr[l].first--;
    fr[r].first--;

}
}
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