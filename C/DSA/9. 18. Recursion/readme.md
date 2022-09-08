### Recursion 

---

It is when a function calls itself to make the problem smaller. (divide and conquer)

Sum of n numbers from 1 to n

```cpp
int sum(int n){
if(n==0) return 0;
   int prevSum=sum(n-1);
   return n+prevSum;
}
```

---

#### Calculate n raised to power p

```cpp
int power(int n, int p){
    if(p==0) return 1;
    int prevPower = power(n,p-1);
    return n*prevPower; 
}
```

---

#### Factorial of n

```cpp
int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}
```

---

#### Fibonacci number

```cpp
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}
```

---

## Part 2

#### Check if an array is sorted

```cpp
bool sorted(int a[],int n){
    if(n==1) return true;
    bool resta = sorted(a+1,n-1);
    if(a[0]<a[1] && resta) return true;
    else return false;
}
```

---

#### Print numbers till n

```cpp
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
```

Increasing order

```cpp
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
```

---

#### 

