#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;
    
    vector<int> a(n);
    
    vector<bool> present(n + 2, false);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < n + 2) {
            present[a[i]] = true;
        }
    }
    
    int c = 0;
    while (present[c]) {
        c++;
    }
    
    cout << min(k - 1, c) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
