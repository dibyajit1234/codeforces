#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,ans=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
      if(s[i]=='0') {
        int ok=1;
		  	for(int j=max(0,(int)i-k);j<i;j++){
				  if(s[j]=='1'){
					ok=0;
					break;
			  	}
		  	}
			  ans+=ok;
		    }
      }
     
    cout<<ans<<'\n';
  }
  return 0;
}
