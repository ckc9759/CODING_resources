#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int s=0;
	    int s2=0;
	    int s3=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]==1){
	        s++;
	        s2+=a[i];
	    }
	    else
	    s3++;
	    }
	    if(s==0&&s3%2!=0)
	    cout<<"no"<<endl;
	    else if(s%2==0&&s2%2==0)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
