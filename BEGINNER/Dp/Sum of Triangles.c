// Dp soln

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    int n;
    cin>>n;
    int a[n+1][n+1];
    int ans=0;
    int tmp;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
        }
    }
    int dp[n+1][n+1];
    for(int j=1;j<=n;j++){
        dp[n][j]=a[n][j];
    }
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=i;j++){
            dp[i][j]=a[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
        }
    }
    cout<<dp[1][1]<<endl;
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
