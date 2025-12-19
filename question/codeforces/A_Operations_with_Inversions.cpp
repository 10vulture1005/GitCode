#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l, a, b;
    cin >> l >> a >> b;

    long long g = gcd(b, l);

    long long r0 = a % g;

    long long maxPrize = r0 + g * ((l - 1 - r0) / g);

    cout << maxPrize << "\n";
    return 0;
}
