### Day 2 -> LL

---

- Discussed the previous unsolved problems.

#### Swap nodes in pairs

```py
recursive approach - Solve 1 pair and let recursion do the rest.
Iterative approach - Maintain 2 pointers curr and prev and keep linking as mentioned in question.
```

#### Delete the middle of LL

```py
Used two pointer approach, fast and slow to find (middle-1)th element and changed the links.
```

#### Remove duplicates from sorted LL

```cpp
Keep moving forward the curr node till we have the same values in LL nodes.
If a different value is encountered we move the prev node to curr and curr node to the next.
```

#### Add 1 to number rep. by LL

```cpp
1. Maintain a stack and keep adding carry whenever formed and update the resulting number at each node.
2. Reverse the LL and add 1 to it, and then after updation reverse it again.
3. Find the actual number, add 1 to it and form the linked list using digit sep.
```

#### Nth node from the end of LL

```py
1. Find the length and then calculate (L-n+1)th node.
2. Maintain two pointers with a different of n (known) and then shift them till fast pointer reaches null, corner cases are
when n>len(LL) and when n=len(LL).
```

#### Remove the nth node

```py
Follow the same approach and succesively find the prev node to nth node and remove the links.
```

---

Thank you
