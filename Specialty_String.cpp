#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<int> st;
    for(int i=0;i<n;i++){
      if(!st.empty() && s[i]==st.top())st.pop();
      else st.push(s[i]);
    }
    cout<<(st.empty()?"Yes":"No")<<'\n';
  }
  return 0;
}
