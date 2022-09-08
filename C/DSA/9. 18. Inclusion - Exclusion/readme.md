### Inclusion and Exclusion principle

---

n1 in class a
n2 in class b
n3 in both class a and b

Total no. of students = n1+n2-n3;

#### Numbers divisible by 5 or 7 between 1 and 1000

```cpp
int divisible(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
```


### Euclid Algorithm to find GCD

---

```cpp
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
```

---
Thank you
