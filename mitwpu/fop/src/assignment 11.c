#include <stdio.h>
#include <math.h>

int main() {
    int num, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);


    if (num >= 0)
        printf("Square root = %.2f\n", sqrt(num));
    else
        printf("Square root not defined for negative numbers\n");

    
    printf("Square = %d\n", num * num);

    
    printf("Cube = %d\n", num * num * num);

    
    if (num <= 1) {
        printf("The number is NOT PRIME\n");
    } else {
        int isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("The number is PRIME\n");
        else
            printf("The number is NOT PRIME\n");
    }


    if (num >= 0) {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial = %lld\n", fact);
    } else {
        printf("Factorial not defined for negative numbers\n");
    }

    if (num > 1) {
        printf("Prime factors: ");

        
        while (num % 2 == 0) {
            printf("2 ");
            num /= 2;
        }

        
        for (i = 3; i <= sqrt(num); i += 2) {
            while (num % i == 0) {
                printf("%d ", i);
                num /= i;
            }
        }

        if (num > 2)
            printf("%d", num);

        printf("\n");
    } else {
        printf("No prime factors\n");
    }

    return 0;
}