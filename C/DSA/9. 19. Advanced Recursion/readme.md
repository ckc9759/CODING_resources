### Recursion

---

#### Print all permutations of a string

```cpp
void permutation(string s,string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
    
}
```

---

#### Count the number of paths possible from start to end point

```cpp
int countPath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=countPath(s+i,e);
    }
    return count;
}
```

---

#### Count the number of possible paths in a maze (n*n matrix)

```cpp
int countPath2(int n, int i, int j){
    if(i==n-1&&j==n-1){
        return 1;
    }
    if(i>=n||j>=n){
        return 0;
    }
    return countPath2(n,i+1,j)+countPath2(n,i,j+1);
}
```

---

#### Tiling 2*1 blocks in 2*n grid

```cpp
int tilingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingWays(n-1)+tilingWays(n-2);
}
```

---

#### Friends paring problem

```cpp
int friendsParing(int n){
    if(n==0){
        return 0;
    }
    if(n==1||n==2){
        return n;
    }
    return friendsParing(n-1)+friendsParing(n-2)*(n-1);
}
```

---

#### 0-1 Knapsack problem : Put n items 

```cpp
// Put n items with given weight and value in a knapsack of capacity W to get maximum total value in the knapsack 

