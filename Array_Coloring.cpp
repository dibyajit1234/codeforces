#include<bits/stdc++.h>
using namespace std;
bool check_even(int a){
  return a%2==0;
}
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    bool flag=true;
    cin>>n;
    vector<int> a(n);
    int sum=0;
    for(int &x:a){
      cin>> x;
    }
    for(int i=1;i<n;i++){
      if(check_even(a[i]) == check_even(a[i-1])){
        flag = false;
        break;
      }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}
