### Functions

---


```py
Functions are used to ease up our process of execution. 
If we need to perform a certain number of same operations, 
we can make a function for the same and reuse it instead of writing the whole code time and again.

Local variables are created inside the function which have nothing to do with the actual values.

A function can be called from any other function or the main function.
```

---

### Call stack 

Whenever we create a function and call it, system allots a memory to the function where it's code, local variables and the parameters passed are stored. 
It is called "stack" as it is arranged in a stack : one after the another on the top. ( FILO ) --> 
```
First in, last out
```

Suppose we have 3 functions, main print and add.
They are alloted memory chunks and stored in the stackframe in order.
When we return something from the function, the stack pops out the part of that function in the stack.
When we call a function, a new memory is created in the stack for the execution of function till the return statement is reached where it pops out everything.

---

Thank you


