#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int &y :a){
      cin>>y;
    }
    vector<int> b;
    b.push_back(a[0]);
    for(int i=1;i<n;i++){
      b.push_back(a[i]-a[i-1]);
    }
    b.push_back(2*(x-a[n-1]));
    cout<<*max_element(b.begin(),b.end())<<endl;
  }
  return 0;
}
