### Arrays

---

```py

Arrays are used to store a list of values of the same data type.

int a=INT_MIN;
int b=INT_MAX;

This stores the minm value of int range in a and maxm value of int range in b;

Searching in array : 

- Linear Search -> Traverse through the whole array and check if the value being searched gets a match. O(n)
- Binary Search -> Sort the array, start looking with the middle term and 
check if the req number is greater or lower than the middle and perform binary search again for the remaining part of the array. O(logn)
```

---

```cpp
int BinarySearch(int a[], int n, int key){
    int s=0;
    int e=n; // Two pointer technique.
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
```

---

Bubble sort --> max element is sorted and the rest is unsorted and for the next iteration the second max element becomes the max element.

---

Program to display the maximum element till ith index for i in range (0,n-1)

```cpp
void baj(){
    int mx=INT_MAX;
    int n;
    cin>>n;
    int a[n];
    f0{
        cin>>a[i];
    }
    f0{
        mx=max(mx,a[i]);
        cout<<mx<<" ";
    }
    cout<<endl;
}
```

---

#### Subarray and Subsequence : 

```py
Subarray is a continous part of an array. No. of subarrays in an n sized array = n*(n+1) / 2

A subsequence is a discontinous sequence of an array with elements in the same order.
Number of subsequence in an array is 2^n.

Example: 1234 is an array. 12 is a subarray and 13 is a subsequence.
```

Problem : Output sum of each subarray in an array

Nested loop --> store in counter variable and print after each sum.

#### Problem : Longest Arithmetic Subarray.

A subarray with equal common difference.





