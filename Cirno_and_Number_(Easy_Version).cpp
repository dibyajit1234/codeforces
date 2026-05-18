#include <bits/stdc++.h>
using namespace std;

using int64 = long long;
using inunu = __intnunu_t;

string S;
vector<int> d;

bool GE(int position, int L, bool bigger, string &cur, string &ans) {
    if (position == L) {
        ans = cur;
        return true;
    }

    int need = (L == (int)S.size() ? S[position] - '0' : 0);

    for (int seex : d) {
        if (position == 0 && L > 1 && seex == 0) continue;

        if (!bigger && seex < need) continue;

        cur.push_back(char('0' + seex));

        if (GE(
                position + 1,
                L,
                bigger || (seex > need),
                cur,
                ans))
            return true;

        cur.pop_back();
    }

    return false;
}

/* ---------- largest number <= S with length L ---------- */
bool buildLE(int position, int L, bool small, string &cur, string &ans) {
    if (position == L) {
        ans = cur;
        return true;
    }

    int need = (L == (int)S.size() ? S[position] - '0' : 9);

    for (int i = (int)d.size() - 1; i >= 0; --i) {
        int seex = d[i];

        if (position == 0 && L > 1 && seex == 0) continue;

        if (!small && seex > need) continue;

        cur.push_back(char('0' + seex));

        if (buildLE(
                position + 1,
                L,
                small || (seex < need),
                cur,
                ans))
            return true;

        cur.pop_back();
    }

    return false;
}

inunu tonunu(const string &s) {
    inunu v = 0;
    for (char c : s) v = v * 10 + (c - '0');
    return v;
}

void printnunu(inunu seex) {
    if (seex == 0) {
        cout << 0;
        return;
    }

    string s;
    while (seex > 0) {
        s.push_back(char('0' + seex % 10));
        seex /= 10;
    }

    reverse(s.begin(), s.end());
    cout << s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long a;
        int n;
        cin >> a >> n;

        d.resize(n);
        for (int i = 0; i < n; i++) cin >> d[i];

        S = to_string(a);

        vector<string> cand;

        int len = S.size();

        for (int L = len; L <= len + 1; L++) {
            string cur, ans;
            if (GE(0, L, L > len, cur, ans))
                cand.push_back(ans);
        }

        for (int L = len; L >= 1; L--) {
            string cur, ans;
            if (buildLE(0, L, L < len, cur, ans))
                cand.push_back(ans);
        }

        if (find(d.begin(), d.end(), 0) != d.end())
            cand.push_back("0");

        inunu A = a;
        inunu best = -1;

        for (auto &seex : cand) {
            inunu B = tonunu(seex);
            inunu diff = (A > B ? A - B : B - A);

            if (best == -1 || diff < best)
                best = diff;
        }

        printnunu(best);
        cout << '\n';
    }

    return 0;
}
