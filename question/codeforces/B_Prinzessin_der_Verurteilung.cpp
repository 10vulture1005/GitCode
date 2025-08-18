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
for(int i = 0; i < 26; i++) {
    char ss = char('a'+i);
    if(s.find(ss) == string::npos){
       cout<<ss<<endl;
        return;
    }
}
for(int i = 0;i<26;i++){
for(int j = 0;j<26;j++){
        char f = char('a'+i);

    char g = char('a'+j);
            string ans = "";
        ans.pb(f);
        ans.pb(g);
    if(s.find(ans) == string::npos){
       cout<<ans<<endl;
        return;
    }
}
}


for(int i = 0;i<26;i++){

for(int j = 0;j<26;j++){

for(int k = 0; k <26; k++) {
            char f = char('a'+i);

            char g = char('a'+j);

        char h = char('a'+k);
        string ans = "";
        ans.pb(f);
        ans.pb(g);
        ans.pb(h);
    if(s.find(ans) == string::npos){
       cout<<ans<<endl;
        return;
    }
}
}
}
cout<<"i really dont know"<<endl;
cout<<"this will never run hehe"<<endl;
cout<<"ans will not cross lenght 3"<<endl;

}
signed main(){
input_tej_le;
int t;
cin>>t;
while(t--){
vulture();
}
}