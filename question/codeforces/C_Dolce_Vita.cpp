#include <bits/stdc++.h>
#include <unordered_set>
#define int long long
#define gcd(a, b) (__gcd(a, b))
#define vin(a, n)               \
    for (int i = 0; i < n; ++i) \
        cin >> a[i];
#define vout(a, n)              \
    for (int i = 0; i < n; ++i) \
        cout << a[i] << ' ';
#define all(a) (a.begin(), a.end());
#define pb push_back
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define vi vector<int>
#define input_tej_le             \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
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
void vulture()
{
int n,k;
cin>>n>>k;

vector<int> a(n);
vin(a,a.size());

sort all(a);
vector<int> p(n+1);
for(int i = 1; i <=n; i++) {
    p[i]=p[i-1]+a[i-1];
}
int add = 0;
int ans = 0;
int c= 0;
for(int i = n;i>=1;i--){
    int v = ((k-p[i])/i)+1;
if(k-p[i]<0){
    v=0;
    
}
ans+=v*i;
c+=v;
add=(i-1)*c;
// for(int i = 1; i <=n;i++){
// cout<<p[i]<<" ";
// }
// cout<<endl;
if(i>0)
p[i-1]+=add;


}

cout<<ans<<endl;

}
signed main()
{
    input_tej_le;
    int t;
    cin >> t;
    while (t--)
    {
        vulture();
    }
}
