#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    string s;
    cin>>s;
    int m1;
    cin>>m1;
    int dp[s.size()];
    int c=0;
    dp[0]=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            c++;
        }
        dp[i]=c;
    }
    while(m1--){
        int l,r;
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<endl;
    }
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	  baj();
	return 0;
}
