built in str
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice, i, len;

   
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(1)
    {
        printf("\n STRING OPERATIONS MENU \n");
        printf("1. Find Length (String 1)\n");
        printf("2. Copy Strings \n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String 1\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length of String 1 = %lu\n", strlen(str1));
                break;

            case 2:
                
                strcpy(temp, str1);
                strcpy(str1, str2);
                strcpy(str2, temp);

                printf("After copying:\n");
                printf("String 1 = %s\n", str1);
                printf("String 2 = %s\n", str2);
                break;

            case 3:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string = %s\n", temp);
                break;

            case 4:
                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                strcpy(temp, str1);
                len = strlen(temp);

                for(i = 0; i < len / 2; i++)
                {
                    char ch = temp[i];
                    temp[i] = temp[len - i - 1];
                    temp[len - i - 1] = ch;
                }

                printf("Reversed string = %s\n", temp);
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
