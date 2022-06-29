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
    vi b(n);
    ll m=1000000007;
    f0{
        cin>>b[i];
        m=min(b[i],m);
    }
    if(n==1){
        cout<<b[0]/2<<endl;
        return;
    }
    m--;
    ll sum=0;
    int a[n];
    f0{
        a[i]=b[i];
    }
    f0{
        a[i]-=m;
        sum+=a[i];
    }
    ll z1=b[0];
    ll z2=sum;
    ll cnt=0;
    ll z3=a[0];
    while(sum+z3!=b[0]){
        sum+=n;
        z3++;
        cnt++;
    }
    f0{
        a[i]+=cnt;
        cout<<a[i]<<" ";
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
