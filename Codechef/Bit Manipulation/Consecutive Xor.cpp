/* Approach --> In this question, by observation we see that if there is atleast a 1 present we can make any string except for the case where they are alternating 10 or 01
if the string has no 1s then it is only possible when the two strings are equal*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll n;
    cin>>n;
    string a;
    cin>>a;
    string b;
    cin>>b;
    string zero_one="",one_zero="";
    f0{
        if(i & 1){
            one_zero+='1';
            zero_one+='0';
        }
        else{
            one_zero+='0';
            zero_one+='1';
        }
    }
    ll one=count(a.begin(),a.end(),'1');
    if(one){
        if(b==one_zero||b==zero_one){
            if(a==b) cout<<"YES";
            else cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    else{
        if(a==b){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    cout<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	  baj();
	}
	return 0;
}
