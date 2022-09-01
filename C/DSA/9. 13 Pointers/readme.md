### Pointers

---

Pointers are variables that store the address of other variables.

Example : 

```cpp
int main() {
   int a=10;
   int *p;
   p=&a;
   // & - Gives the address of the variable.
   cout<<&a<<endl; //--> address of a
   cout<<p<<endl; //--> address of a
   cout<<*p<<endl; //--> Gives 10
   return 0;
}
```

---

Uses of pointers 

- We can access the variable using pointer using *p.
- *p --> It is called dereferencing the pointer.
- If we change the value of pointer using *p=20, then the value of actual variable a is also changed to 20 as the pointer points to the variable a.

---

#### Pointer arithmetic

---

```cpp
int a=10;
int *p=&a;
cout<<p<<endl; --> 2000
p++;
cout<<p<<endl; --> 2004  (this is because int takes 4 bytes each)
}

// If there was a character, after increment it will print 2001.
// If we make an array and use pointer on the array like *arr, it will print the first element of the array.
```

--- 

```cpp

If we use pointers on array,
We can access all of it's element using a single pointer and incrementing it's value.

```

#### Pointer to Pointer.

---

```cpp
int main(){
   int a=10;
   int *p;
   p=&a;
   cout<<*p<<endl; // 10
   int **q=&p;
   cout<<*q<<endl; // 2000
   cout<<**q<<endl; // 10
}

```

#### Passing pointers to function

If we pass variables to functions, it's value doesn't change in the main function if we swap.
But if we pass pointers to the function and swap them, then the actual value will also be reflected in the main function.

---


