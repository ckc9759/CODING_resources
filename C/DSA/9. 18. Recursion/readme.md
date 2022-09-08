### Recursion 

---

It is when a function calls itself to make the problem smaller. (divide and conquer)

```cp
int sum(int n){
if(n==0) return 0;
   int prevSum=sum(n-1);
   return n+prevSum;
}
```



