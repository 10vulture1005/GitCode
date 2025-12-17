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

int n;
vector<int> pos;       
vector<char> col;      
vector<char> diag1;    
vector<char> diag2;    
long long total = 0;

void printans() {
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < n; ++c)
            cout << (pos[r] == c ? 'Q' : '.');
        cout << '\n';
    }
    cout << '\n';
}

void backtrack(int r) {
    if (r == n) {
        ++total;
        printans();
        return;
    }
    for (int c = 0; c < n; ++c) {
        int d1 = r - c + (n - 1);
        int d2 = r + c;
        if (!col[c] && !diag1[d1] && !diag2[d2]) {
            pos[r] = c;
            col[c] = diag1[d1] = diag2[d2] = 1;
            backtrack(r + 1);
            col[c] = diag1[d1] = diag2[d2] = 0;
        }
    }
}


void vulture(){
cin>>n;

    pos.assign(n, -1);
    col.assign(n, 0);
    diag1.assign(2*n - 1, 0);
    diag2.assign(2*n - 1, 0);

    backtrack(0);
    cout  << total << '\n';
}
signed main(){
input_tej_le;
int t=1;
// cin>>t;
while(t--){
vulture();
}
}