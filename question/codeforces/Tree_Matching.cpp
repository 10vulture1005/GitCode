#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define vll vector<long long>
#define yep cout << "YES" << endl
#define nope cout << "NO" << endl
#define pm cout << "-1\n";
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define fori(n) for (ll i = 0; i < (n); i++)
#define forj(n) for (ll j = 0; j < (n); j++)
#define fork(n) for (ll k = 0; k < (n); k++)
using ll = long long;
using ldd = long double;
typedef vector<pair<ll, ll>> vpll;
const long long int MOD = 998244353;
template <typename T>
void printv(const vector<T> &v)
{
    for (const auto &x : v)
        cout << x << ' ';
    cout << '\n';
}

long long power(long long a, long long b)
{
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

long long powermod(long long a, long long b)
{
    long long result = 1;
    while (b)
    {
        if (b & 1)
            result = ((result % MOD) * (a % MOD)) % MOD;
        a = ((a % MOD) * (a % MOD)) % MOD;
        b >>= 1;
    }
    return result % MOD;
}

ll countDivisibles(ll A, ll B, ll M)
{
    if (A % M == 0)
        return (B / M) - (A / M) + 1;

    return (B / M) - (A / M);
}

long long modpow(long long a, long long b)
{
    long long res = 1;
    a = a % MOD;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

long long modinv(long long q)
{
    return modpow(q, MOD - 2);
}
// long long ans = (p * modinv(q)) % MOD

bool sortbycomp(const pair<ll, ll> &a,
                const pair<ll, ll> &b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.second > b.second;
}

const int MAXN = 5000;
ll fact[MAXN], invFact[MAXN];

void precompute_factorial()
{
    fact[0] = 1;
    for (ll i = 1; i < MAXN; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    // inverse factorial of MAXN using Fermat's Little Theorem
    invFact[MAXN - 1] = modinv(fact[MAXN - 1]);
    for (ll i = MAXN - 2; i >= 0; i--)
    {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

ll nCr(ll n, ll r)
{
    if (r < 0 || r > n)
        return 0;
    return (((fact[n] * invFact[r]) % MOD) * invFact[n - r]) % MOD;
}
// for nCr - first run precompute_factorial() ouside test cases loop - O(N), then ncr calls are O(1)

void dfscc(ll node, vector<bool> &visited,
           const vector<vector<ll>> &adj)
{
    visited[node] = true;
    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            dfscc(neighbor, visited, adj);
        }
    }
}

ll countComponents(ll V, const vector<vector<ll>> &adj, vll &ans)
{
    vector<bool> visited(V, false);
    ll count = 0;
    for (int i = 1; i <= V; i++)
    {
        if (!visited[i])
        {
            ans.pb(i);
            dfscc(i, visited, adj);
            count++;
        }
    }
    return count;
}

void dfs(ll node, std::vector<std::vector<ll>> &adj, ll par, ll &f, vll &vis, pair<ll, ll> &start, vll &parent)
{
    vis[node] = 1;
    parent[node] = par;
    for (auto child : adj[node])
    {
        if (child == par)
            continue;
        if (vis[child] == 1)
        {
            f = 1;
            start = {child, node};
            break;
        }
        dfs(child, adj, node, f, vis, start, parent);
        if (f)
            return;
    }
    if (f)
        return;
}

const int N = 1e7 + 5;
int spf[N];
void build_spf()
{
    for (int i = 1; i < N; i++)
        spf[i] = i;

    for (int i = 2; i * i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < N; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    build_spf();
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (gcd(x, y) != 1)
        {
            cout << 0 << endl;
            continue;
        }
        ll d = y - x;
        if (d == 1)
        {
            cout << -1 << endl;
            continue;
        }
        ll mn = 1e10;
        ll d = y - x;
        ll mn = 1e10;

        while (d > 1)
        {
            ll p = spf[d];

            mn = min(mn, (p - y % p) % p);

            while (d % p == 0)
                d /= p;
        }

        cout << mn << endl;;
    }
}