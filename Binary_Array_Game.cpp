#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
      cin>>x;
    }
    if (a[0] == 1 || a[n - 1] == 1) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
  }
}
