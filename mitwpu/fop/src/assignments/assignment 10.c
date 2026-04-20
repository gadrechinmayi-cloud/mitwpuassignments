#include <stdio.h>
#include <math.h>
int main()
{
int a, b, n, choice, i;
unsigned long long f = 1;
float r;
printf("SIMPLE CALCULATOR: \n 1:Addition \n 2:Subtraction \n 3:Multiplication \n 4:Division \n 5:Power \n 6:Factorial \n");
printf("Enter Choice: ");
scanf("%d", &choice);
if (choice >= 1 && choice <= 5)
{
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
}
else if (choice==6)
{
printf("Enter number: ");
scanf("%lld", &f);
}
switch(choice){
case 1:
{
r=a+b;
printf("%f", r);
}
break;
case 2:
{
r=a-b;
printf("%f", r);
}
break;
case 3:
{
r=a*b;
printf("%f", r);
}
break;
case 4:
{
if (b==0)
{
printf("Divisor cannot be 0");
}
else
{
r=(float)a/b;
printf("%f", r);
}
}
break;
case 5:
{
r=pow(a,b);
}
break;
case 6:
{
if (n<0)
{
printf("Error");
}
else
{
for (i = 1; i <= n; ++i) {
f *= i;
}
printf("Factorial of %d = %llu", n, f);
}
}
default:
{
printf("Error:Invalid Choice");
}
return 0;
}
