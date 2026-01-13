#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long a = m / k;
        long long b = m % k;

        long long c;
        if (a % 2 == 0) c = s;
        else c = min(s, k);

        long long d = c - b;
        if (d < 0) d = 0;

        cout << d << endl;
    }
    return 0;
}

