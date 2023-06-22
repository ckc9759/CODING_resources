### Day 3

---

#### To Do list

1. [Rotate](https://www.geeksforgeeks.org/rotate-a-linked-list/) , [LC](https://leetcode.com/problems/rotate-list/) 
2. [Delete](https://www.geeksforgeeks.org/write-a-function-to-delete-a-linked-list/) , [LC](https://leetcode.com/problems/remove-linked-list-elements/)
3. [Reverse](https://www.geeksforgeeks.org/reverse-a-linked-list/) , [LC](https://leetcode.com/problems/reverse-linked-list/)
4. [Circular LL](https://www.geeksforgeeks.org/check-if-a-linked-list-is-circular-linked-list/) , [LC](https://leetcode.com/problems/linked-list-cycle/)
5. [Loops in LL](https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/) , [Len of loops](https://www.geeksforgeeks.org/find-length-of-loop-in-linked-list/)
6. [Remove cycle from LL](https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/) , [LC](https://leetcode.com/problems/linked-list-cycle-ii/)
7. [Find common elements of 2 LL](https://www.geeksforgeeks.org/first-common-element-two-linked-lists/) , [Intersection](https://www.geeksforgeeks.org/intersection-of-two-sorted-linked-lists/) , [LC](https://leetcode.com/problems/intersection-of-two-linked-lists/)
8. [Doubly LL](https://www.geeksforgeeks.org/program-find-size-doubly-linked-list/) , [Doubly LL rev](https://www.geeksforgeeks.org/reverse-a-doubly-linked-list/) , [LC](https://leetcode.com/tag/doubly-linked-list/)

---

#### Why is merge sort a better option than quicksort for linked lists?

--> When it comes to linked lists, there are a few things to keep in mind. The issue is unique due to the memory allocation differences between arrays and linked lists. Unlike arrays, linked list nodes in memory may not be adjacent.
We can insert items in the middle of a linked list in O(1) extra space and O(1) time if we are given a reference/pointer to the previous node, unlike an array. As a result, the merge sort operation can be accomplished without the need for additional linked list space.
We can do random access in arrays since the elements are continuous in memory. In contrast to arrays, we can't access a linked list at random.
Quick Sort necessitates a great deal of this type of access. Because we don't have a continuous block of memory, we have to travel from the head to the i'th node to get to the i'th index in a linked list. Merge sort accesses data in a sequential manner, with less requirement for random access.

---

#### Questions

1. Given a linked list and a number n, you have to find the sum of the last n nodes of the linked list in a single traversal. Explain your approach in brief.
2. What is Circular, Doubly LL ?
3. Applications of LL.
4. Adv and Disadv of LL.
5. Operations on LL, delete, insert, create node struct and LL struct etc.

---

#### Answers

---

<!--Stacks
Queues
Trees
Graphs
Binary tree
Unrolled linked list
Hash table Etc-->
