#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,Max=0;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
      cin>>x;
      Max=max(Max,x);
    }
    cout<<Max*n<<endl;
  }
  return 0;
}
