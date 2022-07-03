#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int x[n];
	int y[n];
	int z[n];
	int s1=0;
	int s2=0;
	int s3=0;
	for(int i=0;i<n;i++){
	    cin>>x[i];
	    cin>>y[i];
	    cin>>z[i];
	    s1+=x[i];
	    s2+=y[i];
	    s3+=z[i];
	}
	if(s1==s2&&s2==s3&&s3==s1&&s1==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
