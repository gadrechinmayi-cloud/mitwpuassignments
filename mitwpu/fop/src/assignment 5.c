matrix op
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int i, j, k, r, c, choice;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter Matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    while(1)
    {
        printf("\n1.Addition\n2.Saddle Point (A)\n3.Inverse (A - 2x2)\n4.Magic Square (A)\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<r;i++)
                {
                    for(j=0;j<c;j++)
                    {
                        sum[i][j] = a[i][j] + b[i][j];
                        printf("%d ", sum[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
            {
                int found = 0;

                for(i=0;i<r;i++)
                {
                    int min = a[i][0], col = 0;

                    for(j=1;j<c;j++)
                    {
                        if(a[i][j] < min)
                        {
                            min = a[i][j];
                            col = j;
                        }
                    }

                    for(k=0;k<r;k++)
                    {
                        if(a[k][col] > min)
                            break;
                    }

                    if(k==r)
                    {
                        printf("Saddle point = %d\n", min);
                        found = 1;
                    }
                }

                if(!found)
                    printf("No saddle point\n");

                break;
            }

            case 3:
            {
                if(r!=2 || c!=2)
                {
                    printf("Inverse only possible for 2x2 matrix\n");
                    break;
                }

                float det;
                det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

                if(det == 0)
                {
                    printf("Inverse not possible\n");
                }
                else
                {
                    printf("Inverse matrix:\n");
                    printf("%.2f %.2f\n", a[1][1]/det, -a[0][1]/det);
                    printf("%.2f %.2f\n", -a[1][0]/det, a[0][0]/det);
                }
                break;
            }

            case 4:
            {
                if(r != c)
                {
                    printf("Not a square matrix\n");
                    break;
                }

                int sum = 0, flag = 1;

                for(j=0;j<c;j++)
                    sum += a[0][j];

                for(i=0;i<r;i++)
                {
                    int row=0, col=0;

                    for(j=0;j<c;j++)
                    {
                        row += a[i][j];
                        col += a[j][i];
                    }

                    if(row != sum || col != sum)
                        flag = 0;
                }

                int d1=0, d2=0;
                for(i=0;i<r;i++)
                {
                    d1 += a[i][i];
                    d2 += a[i][r-i-1];
                }

                if(d1 != sum || d2 != sum)
                    flag = 0;

                if(flag)
                    printf("Magic square\n");
                else
                    printf("Not a magic square\n");

                break;
            }

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
