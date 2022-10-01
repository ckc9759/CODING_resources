### lab5


Q1 : Using if else

```c
#include <stdio.h>

int main(){
	char c;
	int a,b;
	printf("Enter two numbers and the operation\n");
	scanf("%d %d\n", &a,&b);
	scanf("%c",&c);
	int ans=0;
	if(c=='+'){
		ans=a+b;
	}
	else if(c=='-'){
		ans=a-b;
	}
	else if(c=='*'){
		ans=a*b;
	}
	else if(c=='/'){
		if(b==0){
			printf("Undefined\n");
			return 0;
		}
		else{
			ans=a/b;
		}
	}
	else if(c=='%'){
		ans=a%b;
	}
	else{
		printf("Wrong Input");
	}
	printf("Result : %d\n",ans);
	return 0;
}
```

Q1 : Using Switch case

```c
#include <stdio.h>

int main(){
	char c;
	int a,b;
	printf("Enter two numbers and the operation\n");
	scanf("%d %d\n", &a,&b);
	scanf("%c",&c);
	int ans=0;
	switch(c){
		
		case '+' : ans=a+b;
		break;

		case '-' : ans=a-b;
		break;

		case '%' : ans=a%b;
		break;

		case '*' : ans=a*b;
		break;

		case '/' : if(b==0) {printf("Undefined\n"); return 0;}
			       else ans=a/b;
		break;

		default : printf("Wrong Input");
		return 0;
	}
	printf("Result : %d\n",ans);
	return 0;
}
```

---

Q2 : Ternary operators

```c
#include <stdio.h>

int main(){
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	int m=n;
	int rev=0;
	while(m>0){
		rev=rev*10+(m%10);
		m/=10;
	}
	(rev==n) ? printf("YES\n") : printf("NO\n");
	return 0;
}
```

---


Q3 : Max Sum

```c
#include <stdio.h>

int main(){
	int a,b,c,d;
	printf("Enter 4 numbers\n");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	int m1=a;
	int m2=b;
	if(m2>m1){
		m1=b;
		m2=a;
	}
	if(m1<c){
		m2=m1;
		m1=c;
	}
	if(m1<d){
		m2=m1;
		m1=d;
	}
	if(m2<c){
		m2=c;
	}
	if(m2<d){
		m2=d;
	}
	int sum=m1+m2;
	printf("Ans = %d\n",sum);
	return 0;
}
```

---

Q4 : Natural numbers 

```c
#include <stdio.h>

int main(){
	int N;
	printf("Enter a number\n");
	scanf("%d",&N);
    int sum = 0; /* let sum be zero, to begin with */
    int num = 1; /* start adding up from 1 */
    while (num <= N) /* as long as num has not exceeded N...*/
    {
     printf("%d ", num); /* print out the number */
     num++; /* increment it to the next value*/
    }
      printf("Bye\n");
     return 0;
}
```

---


