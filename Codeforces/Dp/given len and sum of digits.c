#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int m,s;
	cin>>m>>s;
	if(s==0){
	    if(m==1){
	        cout<<"0 0"<<endl;
	    }
	    else{
	        cout<<"-1 -1"<<endl;
	    }
	}
	else{
	    string maxi="";
	    string mini="";
	    for(int i=0;i<m;i++){
	        int k=min(9,s);
	        maxi.push_back('0'+k);
	        s-=k;
	    }
	    if(s>0){
	        cout<<"-1 -1"<<endl;
	    }
	    else{
	    for(int i=m-1;i>=0;i--){
	        mini.push_back(maxi[i]);
	    }
	    int j=0;
	    while(mini[j]=='0'){
	        j++;
	    }
	    mini[0]++;
	    mini[j]--;
	    cout<<mini<<" "<<maxi<<endl;
	    }
	}
	return 0;
}
