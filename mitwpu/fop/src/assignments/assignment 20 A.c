without pointers
#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("before swapping: a = %d, b = %d\n", a, b);
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(x, y);

    printf("after swapping: x = %d, y = %d\n", x, y);

    return 0;
}