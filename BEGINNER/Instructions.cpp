#include <bits/stdc++.h>
using namespace std;

int stringtoint(string s){
  int m=0;
  for(int i=0;i<s.size();i++){
      m=10*m+(s[i]-'0');
  }
  return m;
}

int main(){
  // your code                                          OUTPUT- 12345 12340
  string s="12345";
  cout<<stringtoint(s)<<endl;
  int k=stringtoint(s);
  cout<<k-5<<endl;
  return 0;
}


// General tempelate of code
