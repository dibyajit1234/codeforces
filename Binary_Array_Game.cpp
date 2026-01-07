#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,one =0;
    bool ans = false;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
      cin>>x;
      if(x==1) one++;
    }
    if (a[0] == 1 || a[n - 1] == 1) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
  }
}
