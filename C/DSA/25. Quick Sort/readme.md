### Quick Sort

---

- Select an element and put it in the right position such that it is greater than the left elements but smaller than the rightmost elements.
- It is also based on Divide and Conquer algorithm.

```cpp
 QuickSort(arr[],l,r){
    if(l<r){
        int pi = partition(arr[],l,r);
        QuickSort(arr[],l,pi-1);
        QuickSort(arr[],pi+1,r);
    }
 }
 ```
 
 
