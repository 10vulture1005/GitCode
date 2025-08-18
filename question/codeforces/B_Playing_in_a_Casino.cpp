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
int n,m;
cin>>n>>m;
vector<vector<int>> a(n, vector<int>(m));
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cin >> a[i][j];
    }
}
    int ans = 0;

    for (int j = 0; j < m; j++) {
        vector<int> col;
        for (int i = 0; i < n; i++) {
            col.push_back(a[i][j]);
        }
        sort(col.rbegin(), col.rend());

        for(int i = 1; i <=n; i++) {
            ans+=(n-2*i+1)*col[i-1];
        }

        for (int i = 0; i < n; i++) {
            a[i][j] = col[i];
        }
    }
cout<<ans<<endl;
    // // Output
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }



    for(int i = 0; i < n; i++) {
        
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