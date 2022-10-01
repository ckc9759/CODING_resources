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

Q3 : 
