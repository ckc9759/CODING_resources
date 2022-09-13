### Time Complexity

---

```py
If we run a loop of n size in a program, complexity is O(n).
Two loops is O(n2).

Each statement of declaration or one liner codes don't affect much in time and the loops are what decide the complexity.

Example : if n is in range (1,10^6) and we add 5 to n, even taking the worst case, n is almost the same. 
Therefore time complexity is O(n) only.

K * O(n) = O(n) & k + O(n) = O(n) where K is a constant.
```

---

### Space Complexity

```py
Space complexity is the amount of memory space our program is taking and is always constant and does not depend on our input.
If we declare 3 integer variables like a,b,c then the total memory space used is 12 bytes ( 4 for each), 
Irrespective of the fact that we are running a loop of c b or anything.
```

- Best case time complexity --> Denoted by Omega
- Worst case time complexity --> Dentoed by Big O
- Average time complexity --> Denoted by theta

---

- 2 Separate Loops of size m and n --> O(n+m)
- 2 Nested loops --> O(n*m)

- O(log n) complexity --> n/2 --> n/4 --> n/8 while loop (n/=2)

- Time complexity --> 1+1/2+1/3 ...... 1/n <= log(n)
- O(logn) < o(sqrt(n))

---

Thank you




