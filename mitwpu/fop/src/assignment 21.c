#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("fp.txt", "w");
    fprintf(fp, "Hello World\n");
    fprintf(fp, "Welcome to Pune\n");
    fclose(fp);

    fp = fopen("fp.txt", "r");
    printf("File contents:\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
