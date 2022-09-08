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

##### Increasing order

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

#### Find the first and last occurence of a number in an array

```cpp
int firstocc(int a[],int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return firstocc(a,n,i+1,key);
}
```

```cpp
int lastocc(int a[],int n, int i, int key){
    int resta=lastocc(a,n,i+1,key);
    if(resta!=-1){
       return resta;
    }
    if(a[i]==key){
       return i;
    }
    else{
       return key;
    }
}
```

---

#### Reversing a string using recursion

```cpp
void reverse(string s){
    if(s.size()==0){
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}
```

---

#### Replace pi with 3.14 in a string 

```cpp
void replacePi(string s){
    if(s.size()==0){
        return;
    }
    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}
```



