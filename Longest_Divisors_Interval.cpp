/*#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,count =0,res=1,temp;
    cin>>n;
    if(n%2==0)res =2;
    if(n>1000) temp=1000;
    else temp =n;
    for(int i=1;i<=temp;i++){
      if(n%i==0) count++;
      else{
        res = max(res,count);
        count =0;
      }
      res = max(res,count);
    }
    cout<<res<<endl;
  }
  
  return 0;
}
*/ 
#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin >> n;
    long long i = 1;
    while (n % i == 0) {
        i++;
    }
    cout << i - 1<<endl;

  }
        
  return 0;
}

