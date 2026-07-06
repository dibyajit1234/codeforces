#include<bits/stdc++.h>
using namespace std;
long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}
  int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    set<int> set;
    for(int x:arr)set.insert(x);
    int m=set.size();
    
    if(m<k)cout<<0<<'\n';
    else cout<<(factorial(k-1)/(factorial(m-1)*factorial(k-m)))<<'\n';


  }
}
