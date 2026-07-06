#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long modpow(long long a, long long e) {
    long long res = 1;
    a %= MOD;
    while (e > 0) {
        if (e & 1) res = res * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long gr = std::gcd(n, r - 1);
        long long gc = std::gcd(m, c - 1);

        long long freeVars = gr * gc + (n - gr) * (m - gc);

        cout << modpow(2, freeVars) << '\n';
    }

    return 0;
}
