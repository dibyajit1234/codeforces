/*#include<bits/stdc++.h>
using namespace std; 
void print(vector<int> a){
  cout<<a.size()<<endl;
  for(int x:a)cout<<x<<' ';
  cout<<'\n';
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,count=0,point=-1;
    cin>>n;
    string s;
    cin>>s;
    vector<int> ans;
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        point=i;
        break;
      }
    }

    for(int i=0;i<n-1;i++){
      if(s[i]<s[i+1])count++;
    }
    if(point==-1 && count==0){
      cout<<"Bob"<<endl;
    }else{
      for(int i=point;i<n;i++){
        ans.push_back(i+1);
        if(i==n-1 || s[i]<s[i+1])break;
      }
      if(n%2==0){
        if(count%2!=0){
          cout<<"Bob"<<endl;
          print(ans);
        }
        else {
          cout<<"Alice"<<endl;
          print(ans);
        }
      }
      else{
        if(count%2!=0){
          cout<<"Alice"<<endl;
          print(ans);
        }
        else {
          cout<<"Bob"<<endl;
          print(ans);
        }
      }

    }
  }
  return 0;
}
*/ 
/**
 * C. Sorting Game
 * * Strategy:
 * 1. Count the total number of zeros (cnt0).
 * 2. In a sorted string, indices [0, cnt0-1] must be '0' and [cnt0, n-1] must be '1'.
 * 3. Collect all indices where s[i] does not match this sorted state.
 * 4. If no indices are collected, the string is already sorted -> Bob wins.
 * 5. Otherwise, Alice picks all those indices, sorts the string in one move -> Alice wins.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Step 1: Count total zeros to determine the "sorted boundary"
    int cnt0 = 0;
    for (char c : s) {
        if (c == '0') cnt0++;
    }

    // Step 2: Identify misplaced indices
    // 1-based indexing is required for the output
    vector<int> moves;
    
    for (int i = 0; i < n; i++) {
        if (i < cnt0) {
            // This range should contain '0'. If it has '1', it needs to move.
            if (s[i] == '1') {
                moves.push_back(i + 1);
            }
        } else {
            // This range should contain '1'. If it has '0', it needs to move.
            if (s[i] == '0') {
                moves.push_back(i + 1);
            }
        }
    }

    // Step 3: Determine winner
    if (moves.empty()) {
        cout << "Bob" << "\n";
    } else {
        cout << "Alice" << "\n";
        cout << moves.size() << endl;
        for (int i = 0; i < moves.size(); i++) {
            cout << moves[i] << (i == moves.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
