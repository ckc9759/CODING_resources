
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
    string s;
    cin>>s;
    ll cnt=0;
    ll m=0;
    f0{
        if(s[i]=='x'){
            m++;
        }
        else{
            if(m>2){
                cnt+=m-2;
            }
            m=0;
        }
    }
    if(m>2){
        cnt+=m-2;
    }
    cout<<cnt<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	baj();
	return 0;
}
