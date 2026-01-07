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
    int m=1,temp = n;
    while(temp/10>0) {
      m++;
      temp = temp/10;
    }
    cout<<(n%2==0?(int)(n/pow(2,m)):(int)((n/pow(2,m))+(m-1)))<<endl;
  }
  return 0;
}
