#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int sum=0;
	    int one=0;
	    int zero=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='0'){
	            zero++;
	        }
	        else{
	            one++;
	        }
	    }
	    for(int i=0;i<s.size();i++){
	         while(s[i]=='0'){
	             i++;
	         }
	         if(s[i-1]=='0'){
	         sum+=1;
	         }
	    }
	    if(one==0){
	        cout<<1<<endl;
	    }
	    else if(zero==0){
	        cout<<0<<endl;
	    }
	    else{
	    cout<<min(sum,2)<<endl;
	    }
	}
	return 0;
}
