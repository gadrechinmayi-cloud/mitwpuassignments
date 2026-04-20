#include <stdio.h>
void main()
{
int a, b, choice;
float r;
printf("SIMPLE CALCULATOR: \n 1:Addition \n 2:Subtraction \n 3:Multiplication \n 4:Division \n");
printf("Enter Choice: ");
scanf("%d", &choice);
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
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
default:
printf("Error:Invalid Choice");
}
}
