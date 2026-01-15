#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,ac=0,bc=0;
    cin>>n;
    vector<int> a(n),b(n);
    for(int &x:a){
      cin>>x;
      ac^=x;
    }
    for(int &x:b){
      cin>>x;
      bc^=x;
    }
    for(int i=0;i<n;i++){
      if(i%2==0){
        int temp = (ac^a[i])^b[i];
        if(temp>ac){
          ac=temp;
          bc=(bc^b[i])^a[i];
        }
      }else{
        int temp = (bc^b[i])^a[i];
        if(temp>bc){
          bc = temp;
          ac = (ac^a[i])^b[i];
        }
      }
    }
    
    if(ac==bc)cout<<"Tie"<<endl;
    else cout<<(ac>bc ?"Ajisai":"Mai")<<endl;
  }
  return 0;
}

