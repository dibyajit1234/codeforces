#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,mul=1,temp =1,res =-1;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
      cin>>x;
      mul*=x;
    }
    for(int i=0;i<n;i++){
      temp *=a[i];
      if(mul/temp==temp){
        res = i+1;
        break;
      }
    }
    cout<<res<<endl;
  }
}
