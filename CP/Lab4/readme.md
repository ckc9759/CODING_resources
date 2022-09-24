### Lab4

Q1 : Write a C program that reads in an integer denoting number of days. It prints 
the number of years, number of months and the number of days that constitute 
the input number of days. For example, if the input number is 403, it should 
print 1(year), 1(month), 13(days). For simplicity: there is no need to consider 
leap years and assume all months have 30 days. [Hint: Use modulus (%) and 
division (/) operators. End of Hint

```c
#include <stdio.h>

int main(void) {
	// your code goes here
	int m, years, months, days;
    scanf("%d", &m);
    years = m/365;
    m %= 365;
    months = m/30;
    m %= 30;
    days = m;
    printf("Years : %d\nMonths : %d\nDays : %d\t", years, months, days);
	return 0;
}
```

---

Q2 : 

---

Q3 : Write a C program, “swap.c”, to swap the values of two integer numbers a and 
b entered by the user, and display the new numbers to the user. Do this with 
and without using a third variable.

```c
#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped values\n");
    printf("%d\t%d", a,b);
	return 0;
}
```

---

Q4 : A computer manufacturing company has the following monthly compensation 
policy to their salespersons: 
Minimum base salary : 1500.00 
Bonus for every computer sold : 200.00 
Commission on the total monthly sales : 2 per cent 
Since the prices of computers are changing, the sale price of each computer is 
fixed at the beginning of every month. Write a C program, “computer_sales.c”,
to compute a sales-person's bonus, commission and gross salary. Your program 
should take the number of computers sold (in a month) and the sale price of a 
computer as user input.

```c
scanf("%d", &nComp);
scanf("%d",&salesPrice);
int sales=(salesPrice)*nComp;
int bonus=200*nComp;
int commission=0.02*sales;
int gross salary=commission+bonus+1500;
printf("%d\t%d\t%d",bonus,commission,gross salary);
```

---

Q5 : Write a C program, “ascii_test.c”, which takes two character as input and 
returns the sum of their ASCII as output. For instance, input is A and B, the 
output should be 131 (sum of the ASCII of A and B). [Hint: Use explicit typecast 
to covert character to integer values. End of Hint

```c
scanf("%c%c",&a,&b);
int sum=(int)(a)+(int)(b); # Type Casting
printf("%d",sum);
```

Q6 : 

Q7 : Write a C program in “math_ops.c” that evaluates and prints the values of the
following arithmetic expressions. Here x and y are floating point numbers to be
taken as input from the user. The value of pi is 3.142. Use exp, sin, cos and
tan functions from math.h library. It is now your task to figure out how to use
the above functions, what is their syntax. Take help of GOOGLE!

expr1 = !! "#$ %&°
'(.%×+&#$
, -." ,&°
expr2 = sin !
/0$#% &.,,'1
23 "

```c
#include <stdio.h>
#include <math.h>

int main(void){
	float x, y;
    scanf("%f %f", &x,&y);
    float pi = 3.142;
    float expr1=((exp(x)*sin(60))+(5.6)*0.00001)/(3*cos(30));
    float expr2=sin((atan(0.33)+pi)/(2*y));
    printf("Expression 1 value : %f\nExpression 2 value : %f\n", expr1,expr2);
	return 0;
}
```

---

Q8 : As you know, the roots x1 and x2 of a quadratic equation ax2 + bx + c = 0 are
calculated by:

x1 = (–b + √ (b2 – 4ac))/2a,
x2 = (–b – √ (b2 – 4ac))/2a

Write a C program named “quadroots.c”, which should take a, b and c as
inputs, and output the values of x1 and x2.

```c
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	scanf("%f %f %f", &a, &b, &c);
	float x1=(-1*b+sqrt(b*b-4*a*c))/(2*a);
	float x2=(-1*b-sqrt(b*b-4*a*c))/(2*a);
	printf("Roots : %f %f", x1,x2);
    return 0;
}
```
