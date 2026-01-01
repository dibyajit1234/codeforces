#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    sort(a.begin(),a.end());
    int i=0;
    if(a.back()==a[0]) cout<<-1<<endl;
    else{
      while(a[i]==a[0])i++;
      cout<<i<<" "<<n-i<<endl;
      for(int j=0;j<i;j++)cout<<a[j]<<" ";
      cout<<endl;
      for(int j=i;j<n;j++)cout<<a[j]<<" ";

    }
      }
  return 0;
}
