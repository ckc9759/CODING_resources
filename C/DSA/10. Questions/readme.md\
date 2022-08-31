### Questions

---

Problem to find the first element with more than one occurence.

Solution --> use hash tables or maps.

---

Subarray with given sum

Two pointers approach 

```cpp
void baj(){
    int n,s;
    cin>>n>>s;
    int a[n];
    f0{
        cin>>a[i];
    }
    int i=0,j=0,st=-1,en=-1;
    int sum=0;
    while(j<n&&sum+a[j]<=s){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
}
```

---

#### Smallest positive missing number from the array.

```cpp
void baj(){
    ll n;
    cin>>n;
    vi a(n);
    mi m;
    f0{
        cin>>a[i];
        m[a[i]]++;
    }
    int i=0;
    while(m[i]>0){
        i++;
    }
    cout<<i<<endl;
}
```

---

Thank you
