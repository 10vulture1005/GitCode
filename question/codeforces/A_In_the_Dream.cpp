#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template < class T >
    using ordered_set = tree < T, null_type, less < T > , rb_tree_tag, tree_order_statistics_node_update > ;
#define vll vector < long long >
    #define yep cout << "YES" << endl
#define nope cout << "NO" << endl
#define pm cout << "-1\n";
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(v)(v).begin(), (v).end()
#define allr(v)(v).rbegin(), (v).rend()
#define MIN(v) * min_element(all(v))
#define MAX(v) * max_element(all(v))
#define fori(n) for (ll i = 0; i < (n); i++)
    #define forj(n) for (ll j = 0; j < (n); j++)
        #define fork(n) for (ll k = 0; k < (n); k++)
            using ll = long long;
using ldd = long double;
typedef vector < pair < ll, ll >> vpll;
const long long int MOD = 1e9 + 7;
template < typename T >
    void printv(const vector < T > & v) {
        for (const auto & x: v)
            cout << x << ' ';
        cout << '\n';
    }

long long power(long long a, long long b) {
    long long result = 1;
    while (b)
    {
        if (b & 1)
            result = result * a;
        a = a * a;
        b >>= 1;
    }
    return result;
}

ll countDivisibles(ll A, ll B, ll M) {
    if (A % M == 0)
        return (B / M) - (A / M) + 1;

    return (B / M) - (A / M);
}

long long modpow(long long a, long long b) {
    long long res = 1;
    a = a % MOD;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

long long modinv(long long q) {
    return modpow(q, MOD - 2);
}
// long long ans = (p * modinv(q)) % MOD

void dfs(ll node, std::vector < std::vector < ll >> & adj, ll par) {
    for (auto child: adj[node]) {
        if (child == par) continue;
        dfs(child, adj, node);
    }
}

ll mex(vector < ll > & arr, ll N)
{

    // sort the array
    sort(arr.begin(), arr.end());

    ll mex = 0;
    for (ll idx = 0; idx < N; idx++)
    {
        if (arr[idx] == mex)
        {
            // Increment mex
            mex += 1;
        }
    }

    // Return mex as answer
    return mex;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    cin >> tt;
    while (tt--) {
        ll n, k;
        cin >> n >> k;
        vll v(n);
        fori(n) cin >> v[i];
        if (count(all(v), 0) == 0) {
            if (k % 2 == 0) fori(n) cout << 1 << " ";
            else fori(n) cout << 0 << " ";
            cout << endl;
        }
        else if (count(all(v), 0) == 1) {
            ll z = mex(v, n);
            std::map < ll, ll > m;
            fori(n) m[v[i]]++;
            ll x = 0;
            for (auto i: m) {
                if (i.ss > 1) {
                    x = i.ff;
                    break;
                }
            }
            if (x >= z || x == 0) {
                for (int i = 0; i < n; i++) {
                    if (v[i] >= z) {
                        v[i] = z;
                    }
                }
                ll sum = 0;
                fori(n) sum += v[i];
                cout << sum << endl;
            }
            else {
                if (k == 1) {
                    for (int i = 0; i < n; i++) {
                        if (v[i] >= z) {
                            v[i] = z;
                        }
                        else {
                            if (m[v[i]] > 1) {
                                v[i] = z;
                            }
                        }
                    }
                    ll sum = 0;
                fori(n) sum += v[i];
                cout << sum << endl;
                }
                else {
                    vll v1 = v;
                    fori(n){
                        if(v1[i] >= x){
                            v1[i] = x;
                        }
                    }
                    vll v2 = v1;
                    fori(n){
                        if(v2[i] == x){
                            v2[i] = x+1; 
                        }
                    }
                    if (k % 2 == 0) {
                        ll sum = 0;
                fori(n) sum += v1[i];
                cout << sum << endl;
                    }
                    else {
                        ll sum = 0;
                fori(n) sum += v2[i];
                cout << sum << endl;
                    }
                }
            }
        }
        else {
            if (k == 1) {
                ll z = mex(v, n);
                std::map < ll, ll > m;
                fori(n) m[v[i]]++;
                for (int i = 0; i < n; i++) {
                    if (v[i] >= z) {
                        v[i] = z;
                    }
                    else {
                        if (m[v[i]] > 1) {
                            v[i] = z;
                        }
                    }
                }
                ll sum = 0;
                fori(n) sum += v[i];
                cout << sum << endl;
            }
            else {
                if (k % 2 == 0) {
                    cout << 0 << endl;
                }
                else {
                    cout << n << endl;
                }
            }
        }
    }
}