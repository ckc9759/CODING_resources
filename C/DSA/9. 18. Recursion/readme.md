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

