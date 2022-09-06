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




