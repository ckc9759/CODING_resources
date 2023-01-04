### Vectors 

---

Dynamic arrays.
We don't need to specify it's size.

```cpp
vector<int>v;

Header file --> #include<vector>

v.push_back(1);
v.push_back(2);

v.size(); // Gives 2 as the size of vector
```

Iterators to traverse the vecotr or use for loop

```cpp
vector<int>::iterator it;
for(it=v.begin();it!=v.end();i++){
    cout<<*it<<endl;
}
```

Iterator is a pointer.

Using Auto keyword. 

```cpp
for(auto it:v){
   cout<<it<<endl;
}
```
```cpp
v.pop_back(); // removes the last 
---

