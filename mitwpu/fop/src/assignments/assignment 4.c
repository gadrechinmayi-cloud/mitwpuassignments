#include <stdio.h>

int main() {
    int bp;
    float hra, ta, gs, pt, ns;
    printf("Enter Basic Pay: ");
    scanf("%d\n",&bp);
    hra=0.1*bp;
    ta=0.05*bp;
    gs=bp+hra+ta;
    printf("Gross Salary: %f\n", gs);
    pt=0.02*gs;
    ns=gs-pt;
    printf("Net Salary:%f", ns);

    
    
    return 0;
}