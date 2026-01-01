#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    int sum=0;
    for(int &x:a){
      cin>> x;
      sum+=x;
    }
    if(sum%2==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}
