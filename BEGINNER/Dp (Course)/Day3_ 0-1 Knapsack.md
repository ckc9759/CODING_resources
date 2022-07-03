### Notes

---

Day 3

### Knapsack problems

* Fractional knapsack --> Greedy.

* What is Knapsack !! 
* Knapsack is nothing but a bag. In such questions, we are given a bag with certain items like I1 I2 I3 etc.
* Let's suppose we have two arrays given : one for weight another for value of each item. 
* Then, we are given a W which is the capacity of our bag. 

```py
Ex:   i1 i2 i3 i4 
wt[] = 1  3  4  5
val[]= 1  4  5  7

W(capacity) = 7 lets say

Therefore, here the constraint is on the weights !!
0-1 knapsack means either the whole item will be contained or nothing from that item will be contained.
```

* In unbounded knapsack, we don't have a limit and we can choose any item any number of times.

---

* To sum up:
  * Fractional knapsack - Any fraction of item can be contained but only once or hence, specified in the question.
  * 0-1 Knapsack - Either whole (1) or none(0) . No space for fractional choosing.
  * Unbounded - We can pick an item again and again. Not limited to one

---

Thank you

