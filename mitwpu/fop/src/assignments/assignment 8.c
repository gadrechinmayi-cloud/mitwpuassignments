#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, T;
    float P;

    printf("Enter 5 marks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        printf("FAIL\n");
    } else {
        T = m1 + m2 + m3 + m4 + m5;
        P = T / 5.0; 
        
        printf("Total: %d, Percentage: %.2f%%\n", T, P);
        printf("Result: PASS - ");

        if (P >= 75) {
            printf("Distinction\n");
        } else if (P >= 60) { // No need to check P < 75, the 'else' already implies it
            printf("First Division\n");
        } else if (P >= 50) {
            printf("Second Division\n");
        } else {
            printf("Third Division\n");
        }
    }

    return 0;
}
