### Lab6

---

Q1 : Armstrong number 

```c
#include <stdio.h>
#include <stdbool.h>

int isArmstrong(int k){
	int j=k;
	int s=0;
	while(j>0){
		s+=(j%10)*(j%10)*(j%10);
		j/=10;
	}
	if(s==k){
		return 1;
	}
	else return 0;
}

int main(){
	printf("Enter two numbers\n");
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		if(isArmstrong(i)){
			printf("%d\n",i);
		}
	}
	return 0;
}
```

---

Q4 : circle 

```c
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void circle(int n){
	double k=pow(n,2);
	double l=pow(n,3);
	double area = 3.14*n*n;
	printf("Area of the circle = %lf\n",area);
	printf("Square is %lf\n",k);
	printf("Cube is %lf\n",l);
}

int main(){
	printf("Enter a number\n");
	int n;
	scanf("%d",&n);
	circle(n);
	return 0;
}
```

---


