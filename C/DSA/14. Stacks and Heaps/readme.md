### Stacks 

---

The size of stack is fixed.

```py
When functions are called, there stackframes are getting added in the memory stack 
and they continue to add up one after the another.
When we return the value from a function, it's memory stack gets popped out.

First in last out.
```

The memory stack is of fixed size and if it gets filled up, then we will encounted `Stack overflow`.

---

### Heap

It is used for dynamic memory allocation.

`New` operator is used to store memory in heap.

Example : 
```cpp
int a=10; //stored in stack
int *p = new int(); //allocate memory in stack
*p = 10;
delete(p)  //deallocate memory
p=new int[4]
delete[]p;  // deallocate memory || same procedure.
p=NULL;
```
