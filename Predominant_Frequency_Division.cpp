#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int &x:arr) cin >> x;
        vector<int> first_parts;
        int count1 = 0, count_others = 0;
        for(int i = 0; i < n - 2; i++){
            if(arr[i] == 1) count1++;
            else count_others++;
            if(count1 >= count_others) {
                first_parts.push_back(i);
            }
        }
        bool ans = false;
        for(int i : first_parts) {
            int mid_ones_twos = 0, mid_threes = 0;
            for(int j = i + 1; j < n - 1; j++){
                if(arr[j] == 3) mid_threes++;
                else mid_ones_twos++;
                if(mid_ones_twos >= mid_threes) {
                    ans = true;
                    break; 
                }
            }
            if(ans) break;
        }
        
        cout << (ans ? "Yes" : "No") << '\n';
    }
}
