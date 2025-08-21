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


vector<int> pow3(40);

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

string fromDeci(string& res, int base, int inputNum)
{
    int index = 0; 
    while (inputNum > 0) {
        res.push_back(reVal(inputNum % base));
        index++;
        inputNum /= base;
    }

    reverse(res.begin(), res.end());

    return res;
}
void vulture(){
int n;
cin>>n;
string a="";
 a = fromDeci(a,3,n);
 cout<<a<<endl;
 int ans = 0;
 for(int i = a.size()-1; i >=0; i--) {
     ans+=(a[i]-'0')*(pow3[a.size()-i]+(a.size()-1-i)*pow3[a.size()-i-2]);
 }
 cout<<ans<<endl;
}
signed main(){
input_tej_le;
int t;
cin>>t;
int p = 1;
for(int i = 0; i < 40; i++) {
    pow3[i]=p;
    p*=3;
}
while(t--){
vulture();
}
}