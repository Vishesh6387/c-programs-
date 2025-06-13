#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Hello, this is a file handling program.\n");
    fclose(fp);

    fp = fopen("example.txt", "a");
    fprintf(fp, "Now we are appending more text.\n");
    fclose(fp);

    char ch;
    fp = fopen("example.txt", "r");
    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}
