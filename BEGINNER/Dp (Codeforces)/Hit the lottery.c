#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll n;
	cin>>n;
	int d1=0;
	int d5=0;
	int d10=0;
	int d20=0;
	int d100=0;
	if(n%100==0){
	    d100=n/100;
	}
	else{
	    d100=n/100;
	    n=n%100;
	    if(n%20==0){
	        d20=n/20;
	    }
	    else{
	        d20=n/20;
	        n=n%20;
	        if(n%10==0){
	            d10=n/10;
	        }
	        else{
	            d10=n/10;
	            n=n%10;
	            if(n%5==0){
	                d5=n/5;
	            }
	            else{
	                d5=n/5;
	                n=n%5;
	                d1=n;
	            }
	        }
	    }
	}
	cout<<(d1+d5+d10+d20+d100)<<endl;
	return 0;
}
