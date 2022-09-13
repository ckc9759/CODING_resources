### Sieve of Erasthones

---

To print all prime numbers in a given range.

Better approach to do the same thing.

```cpp
void primeSieve(int n){
   int prime[100]={0};
   for(int i=2;i<=n;i++){
       if(prime[i]==0){
           for(int j=i*i;j<=n;j+=i){
               prime[i]=1;
           }
       }
   }
   for(int i=2;i<=n;i++){
      if(prime[i]==0){
         cout<<i<<" ";
      }
   }
   cout<<endl;
}
```

---

#### Prime factorization using Sieve

```cpp
void primeFactor(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n/=spf[n];
    }
}
```

---
Thank you
