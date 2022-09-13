### Permutations

---

#### Q. Given an array of distinct integers. Return all possible permutations

```cpp
vector<vector<int>>ans;

void permute(vector<int> &a,int index){
    if(index==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=index;i<a.size();i++){
        swap(a[i],a[index]);
        permute(a,index+1);
        swap(a[i],a[index]);
    }
    return;
}
```

#### STL TRICK

```cpp
sort(nums.begin(),nums.end());
do{
   ans.push_back(nums);
} while(next_permutations(nums.begin(),nums.end()));
```

---

#### Print unique permutations from a list including duplicates

```cpp
check for the case where the adjacent numbers are same and don't swap them i.e continue;
```

---
Thank you

