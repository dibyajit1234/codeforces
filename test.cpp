#include<bits/stdc++.h>
using namespace std;
void swap(char &a,char&b){
        char temp=a;
        a=b;
        b=temp;
    }
int main(){
  string s=")ebc#da@f(";
  int n=s.length();
        int i=0,j=n-1;
        while (i < j) {
        if (!isalpha((unsigned char)s[i])) {
            i++;
        }
        else if (!isalpha((unsigned char)s[j])) {
            j--;
        }
        else {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
        cout<<s<<endl;
    
}
