#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> a(26);
    for(char &c:s){
      a[c-'a']++;
    }
    int count=0;
    for(int i:a){
      count+=(i&1);
    }
    count-=k;
    bool ok = false;
    if(count<=1) ok = true;
    cout<<(ok?"Yes":"No")<<endl;
  }
  return 0;

}
