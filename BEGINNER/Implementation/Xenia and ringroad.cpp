#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll n,m;
	cin>>n>>m;
	int v[m];
	for(int i=0;i<m;i++){
	    cin>>v[i];
	}
	ll sum=0;
	int i=0;
	while(m--){
	    if(i==0)
	    sum+=v[i]-1;
	    else{
	        if(v[i]>=v[i-1])
	        sum+=v[i]-v[i-1];
	        else
	        sum+=n-(v[i-1]-v[i]);
	    }
	    i++;
	}
	cout<<sum<<endl;
	return 0;
}
