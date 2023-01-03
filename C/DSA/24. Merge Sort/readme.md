### Merge Sort

---

- It is based on divide and conquer algorithm.
- Divide the problems recursively.

```cpp
MergeSort(arr[], int l, int r){
    if(l<r){
        mid=(l+r)/2;
        MergeSort(arr[],l,mid);
        MergeSort(arr[],mid+1,r);
        Merge(arr[],l,mid,r); // Merges both the sorted array
    }
}
```

