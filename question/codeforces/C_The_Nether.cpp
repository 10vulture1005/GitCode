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
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) a[i] = i + 1;

    vector<int> dis(n);
    for(int i = 0; i < n; i++) {
        cout << "? " << i+1 << " " << n;
        for(int j = 0; j < n; j++) cout << " " << a[j];
        cout << endl;
        

        cin >> dis[i];
    }

    vector<pair<int,int>> pp(n);
    for(int i = 0; i < n; i++) {
        pp[i] = {dis[i], a[i]};
    }

    vector<int> ans;
    ans.pb(pp[n-1].second);

    sort all(pp);   

    int k = pp[n-1].first;

    for(int i = n-1; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            if(pp[j].first == k-1){
                cout << "? " <<pp[i].second<<' ' <<2 << " " << pp[i].second << " " << pp[j].second << "\n";
                cout.flush();

                int an;
                cin >> an;
                if(an == 2){
                    ans.pb(pp[j].second);
                    i = j+1;
                    k--;
                    break;
                }
            }
        }
    }

    cout << "! "<<ans.size()<<' ';
    for(auto x: ans) cout << x << " ";
    cout << "\n";
    cout.flush();
}

signed main(){
input_tej_le;
int t;
cin>>t;
while(t--){
vulture();
}
}