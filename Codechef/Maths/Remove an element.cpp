/*Approach --> In this question, we have to find the minimum X added in array a. 
The minimum will be for the case when we sort both the array and remove the first element from the array a and subtract from b.
If it isn't the first element that is being removed, then we can for sure say that the minm diffn is b[0]-a[0] as both were minimum and choose any other b will increase the difference.*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>
#define srt(a) sort(a.begin(),a.end())

void baj(){
    ll n;
    cin>>n;
    vi a(n);
    unordered_set<int>s;
    f0{
        cin>>a[i];
        s.insert(a[i]);
    }
    vi b(n-1);
    for(int i=0;i<n-1;i++){
        cin>>b[i];
    }
    srt(a);
    srt(b);
    ll ans=b[0]-a[1];
    for(auto it: b){
        if(s.count(it-ans)==0){
            ans=b[0]-a[0];
            break;
        }
    }
    if(ans<=0){
        ans=b[0]-a[0];
    }
        cout<<ans<<endl;
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
