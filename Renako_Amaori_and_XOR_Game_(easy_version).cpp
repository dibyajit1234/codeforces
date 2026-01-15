#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,ac=0,bc=0,a_ans=0,b_ans=0;
    cin>>n;
    vector<int> a(n),b(n);
    for(int &x:a)cin>>x;
    for(int &x:b)cin>>x;
    for(int i=0;i<n;i++){
      if(a[i]==1)ac++;
      if(b[i]==1)bc++;
    }
    for(int i=0;i<n;i++){
      if(i%2==0 && ac%2==0 && a[i]!=b[i]){
        ac++;
        bc++;
      }
      if(i%2!=0 && bc%2==0 && a[i]!=b[i]){
        ac++;
        bc++;
      }
    } 
    a_ans=(ac%2==0?0:1);
    b_ans = (bc%2==0 ? 0:1);

    if(a_ans==b_ans)cout<<"Tie"<<endl;
    else cout<<(a_ans>b_ans ?"Ajisai":"Mai")<<endl;
  }
  return 0;
}
