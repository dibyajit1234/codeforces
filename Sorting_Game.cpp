#include<bits/stdc++.h>
using namespace std; 
void print(vector<int> a){
  cout<<a.size()<<endl;
  for(int x:a)cout<<x<<' ';
  cout<<'\n';
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,count=0,point=-1;
    cin>>n;
    string s;
    cin>>s;
    vector<int> ans;
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        point=i;
        break;
      }
    }

    for(int i=0;i<n-1;i++){
      if(s[i]<s[i+1])count++;
    }
    if(point==-1 && count==0){
      cout<<"Bob"<<endl;
    }else{
      for(int i=point;i<n;i++){
        ans.push_back(i+1);
        if(i==n-1 || s[i]<s[i+1])break;
      }
      if(n%2==0){
        if(count%2!=0){
          cout<<"Bob"<<endl;
          print(ans);
        }
        else {
          cout<<"Alice"<<endl;
          print(ans);
        }
      }
      else{
        if(count%2!=0){
          cout<<"Alice"<<endl;
          print(ans);
        }
        else {
          cout<<"Bob"<<endl;
          print(ans);
        }
      }

    }
  }
  return 0;
}
