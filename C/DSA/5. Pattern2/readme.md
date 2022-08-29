### Pattern 2

---

```py
1 2 3 4 5
1 2 3 4                                                  Pattern - 1
1 2 3
1 2 
1
```

Solution:
```cpp
for(int i=n;i>=1;i--){
   for(int j=1;j<=i;j++){
       cout<<j<<" ";
   }
   cout<<endl;
}
```

---


```py
1
0 1
1 0 1                                                     Pattern - 2
0 1 0 1
1 0 1 0 1
```

Solution:
```cpp
for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2==0){
                    cout<<1<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            else{
                if(j%2!=0){
                    cout<<1<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
        }
        cout<<endl;
    }
```


---



```py
    1
   1 2
  1 2 3                                                   Pattern - 2
 1 2 3 4
1 2 3 4 5 
```

Solution
```cpp
for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
```

---

```py
Palindromic Pattern
         1
       2 1 2
     3 2 1 2 3                                            Pattern - 4
   4 3 2 1 2 3 4
 5 4 3 2 1 2 3 4 5
```

Solution:
```cpp
for(int i=1;i<=n;i++){
int j;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--;
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++;
        }
        cout<<endl;
    }
```

---



