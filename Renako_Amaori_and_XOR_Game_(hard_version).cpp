#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,ac=0,bc=0;
    cin>>n;
    vector<ll> a(n),b(n);
    for(ll &x:a){
      cin>>x;
      ac^=x;
    }
    for(ll &x:b){
      cin>>x;
      bc^=x;
    }
    for(ll i=0;i<n;i++){
      if(i%2==0){
        ll temp = (ac^a[i])^b[i];
        if(temp>ac){
          ac=temp;
          bc=(bc^b[i])^a[i];
        }
      }else{
        ll temp = (bc^b[i])^a[i];
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

