### Bitwise Manipulation 

---

Left shift operator : `<<`

Example n=0101 = 5

#### Get bit

Get the bit at ith index

```cpp
n=0101
1<<i=0100 //i=2
0101 & 0100 = 0100 (Set bit at 2nd place only)

if(n & (1<<i))!=0) --> then bit is 1 at ith index
```

---

#### Set Bit

Set a bit at ith index

```cpp
n=0101
1<<i=0010
0101 | 0010 = 0111
n | (1<<i)
```

---

#### Clear Bit

Unset the bit at ith index

```cpp
n=0101
int mask=~(1<<i)
n & (mask)
```

---

### Problems : 

---

#### Program to check if a given number is a power of 2

```cpp
bool isPowerof2(int n){
   return (n && !(n & n-1));
}
```

---

#### Counting the number of set bits

```cpp
int numberOfOnes(int n){
   int count=0;
   while(n){
      n=n & (n-1);
      count++;
   }
   return count;
}
```

---

#### Generate all subsets of a set 

```cpp
void subsets(int arr[], int n){
   for(int i=0;i<(1<<n);i++){
       for(int j=0;j<n;j++){
           if(i & (1<<j)){
              cout<<arr[j]<<" ";
           }
       }
       cout<<endl;
   }
}
```

---

#### Find a unique number in an array or the only element with count=1

```cpp
int unique(int a[],int n){
   int xorsum=0;
   for(int i=0;i<n;i++){
     xorsum=xorsum^a[i];
   }
   return xorsum;
}
```

---

#### Same question with 2 unique numbers

```cpp
int twoUnique(int a[], int n){
   int xorsum=0;
   for(int i=0;i<n;i++){
     xorsum=xorsum^a[i];
   }
   int setbit=0;
   int pos=0;
   while(setbit!=1){
      setbit = xorsum & 1;
      pos++;
      xorsum=xorsum>>1;
   }
   int newXor=0;
   for(int i=0;i<n;i++){
      if(setBit(arr[i],pos-1)){
         newXor=newXor^a[i];
      }
   }
}
cout<<newXor<<endl;
cout<<tempxor^newXor<<endl;
```

---

### Unique no. when triplets are present except one

```cpp
Use maps and see if the it.second==1
```

---
Thank you


