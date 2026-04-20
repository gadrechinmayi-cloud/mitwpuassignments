#include <stdio.h>

int main() {
    int a, b, c, d=0;
    printf("Enter number: ");
    scanf("%d", &a);
    b=a;
    while(b>0)
    {
    c=b%10;
    d=d+(c*c*c);
    b=b/10;
    }
    if (a==d){
    printf("Armstrong Number");
    }
    else{
    printf("Not Armstrong Number");
    }
    return 0;
    }
