#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int root = (int)sqrt(n);
    if(pow(root,2)==n)cout<<0<<' '<<root<<endl;
    else cout<<-1<<endl;
  }
  return 0;
}
