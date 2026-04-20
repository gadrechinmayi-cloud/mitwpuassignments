student struct 
#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float m1, m2, m3;
    float total, per;
};

int main()
{
    struct student s[10];
    int i, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i+1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);   

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].per = s[i].total / 3;
    }

    printf("\n Student Results \n");

    for(i = 0; i < n; i++)
    {
        printf("\nName: %s", s[i].name);
        printf("\nRoll No: %d", s[i].roll);
        printf("\nTotal: %.2f", s[i].total);
        printf("\nPercentage: %.2f\n", s[i].per);
    }

    return 0;
}
