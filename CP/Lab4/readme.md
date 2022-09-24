### Lab4

Q1 : Write a C program that reads in an integer denoting number of days. It prints 
the number of years, number of months and the number of days that constitute 
the input number of days. For example, if the input number is 403, it should 
print 1(year), 1(month), 13(days). For simplicity: there is no need to consider 
leap years and assume all months have 30 days. [Hint: Use modulus (%) and 
division (/) operators. End of Hint

```c
```

---

Q3 : Write a C program, “swap.c”, to swap the values of two integer numbers a and 
b entered by the user, and display the new numbers to the user. Do this with 
and without using a third variable.

```c
scanf("%d",&a);
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("Swapped values");
printf("%d\t%d", a,b);
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
int sum=int(a)+int(b); # Type Casting
printf("%d",sum);
```

Q6 : 
