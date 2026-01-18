#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
cin >> t;
while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(b.begin(), b.end());

    string gdCode;
    cin >> gdCode;

    vector<int> pt(k + 2, 0), nt(k + 2, 0);
    int cur = 0, mx = 0, mn = 0;
    for (int i = 1; i <= k; i++) {
        cur += (gdCode[i - 1] == 'R') ? 1 : -1;
        if (cur > mx) {
            mx = cur;
            pt[mx] = i;
        }
        if (cur < mn) {
            mn = cur;
            nt[-mn] = i;
        }
    }

    vector<int> die(k + 2, 0);
    const int INF = 1e9;

    for (int i = 0; i < n; i++) {
        long long x = a[i];
        int best = INF;

        auto it = lower_bound(b.begin(), b.end(), x);

        if (it != b.end()) {
            long long d = *it - x;
            if (d > 0 && d <= mx) best = min(best, pt[(int)d]);
        }
        if (it != b.begin()) {
            auto jt = prev(it);
            long long d = x - *jt;
            if (d > 0 && d <= -mn) best = min(best, nt[(int)d]);
        }

        if (best != INF) die[best]++;
    }
    int dead = 0;
    for (int i = 1; i <= k; i++) {
        dead += die[i];
        cout << (n - dead) << (i == k ? '\n' : ' ');
    }
}
return 0;
}
