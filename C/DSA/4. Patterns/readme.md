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

