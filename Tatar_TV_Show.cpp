#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        bool ok = true;

        for (int z = 0; z < k; z++) {
            int temp = 0;
            for (int i = z; i < n; i += k) temp ^= (s[i] - '0');
            if (temp) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
