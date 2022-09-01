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
