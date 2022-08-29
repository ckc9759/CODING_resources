### Patterns 

---

```py
***
***                                                        PATTERN - 1
***
***
```

row=4 coloumn=3

```cpp
for(int i=1;i<=row;i++){
   for(int j=1;j<=col;j++){
       cout<<"*";
   }
 cout<<endl;
}
```

---

```py
****
*  *                                                        PATTERN - 2
*  *
****
```

row=4 coloumn=4

```cpp
for(int i=1;i<=row;i++){
   for(int j=1;j<=col;j++){
       if(i==1||i==row){
          cout<<"*";
       }
       else if(j==1||j==col){
          cout<<"*";
       }
       else{
          cout<<" ";
       }
   }
 cout<<endl;
}
```

---

```py
****
***                                                         PATTERN - 3
**
*
```

row=4 coloumn=4;

```cpp
for(int i=row;i>=1;i--){
   for(int j=1;j<=i;j++){
       cout<<"*";
   }
 cout<<endl;
}
```

---

```py
   *
  **                                                        PATTERN - 4
 ***
****
```

row=4 coloumn=4

```cpp
for(int i=1;i<=row;i++){
   for(int j=1;j<=col;j++){
       if(j<=n-i) cout<<" ";
       else cout<<"*";
    }
 cout<<endl;
}
```

---

```py
1
22                                                          PATTERN - 5
333
4444
55555
```

row=5 coloumn=4

```cpp
for(int i=1;i<=row;i++){
   for(int j=1;j<=i;j++){
       cout<<i;
    }
 cout<<endl;
}
```

---

```py
Flyod's Triangle
1
2 3
4 5 6                                                        PATTERN - 5
7 8 9 10
11 12 13 14 15
```

row=5 col=5

```cpp
int s=1;
for(int i=1;i<=row;i++){
   for(int j=1;j<=i;j++){
       cout<<s<<" ";
       s++;
    }
 cout<<endl;
}
```
