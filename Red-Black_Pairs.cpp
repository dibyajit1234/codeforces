#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tiger;
    cin >> tiger;

    while (tiger--) {

        int zebra;
        cin >> zebra;

        string eagle, shark;
        cin >> eagle >> shark;

        int lion = 0;        // pointer
        int fox = 0;         // answer (minimum repaint)

        while (lion < zebra) {

            bool sameColor = (eagle[lion] == shark[lion]);

            if (sameColor) {
                // vertical pairing, no repaint
                lion++;
            } 
            else {

                bool canJump = (lion + 1 < zebra);

                if (canJump) {

                    int panda = (eagle[lion] != eagle[lion + 1]);
                    int wolf  = (shark[lion] != shark[lion + 1]);

                    fox += panda + wolf;

                    lion += 2;   // skip next column (used horizontally)
                } 
                else {
                    // last column, forced repaint
                    fox += 1;
                    lion++;
                }
            }
        }

        cout << fox << "\n";
    }

    return 0;
}
