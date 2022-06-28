#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    long long int i,j;
    cin>>n>>m>>a;
    i=n/a;
    j=m/a;
    if(i*a!=n)
    i++;
    if(j*a!=m)
    j++;
    cout<<i*j;
}
