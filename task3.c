#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char* word) {
    char* keywords[] = {"int", "return", "if", "else", "while", "for"};
    for (int i = 0; i < 6; i++)
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    return 0;
}

int main() {
    FILE* fp = fopen("code.c", "r");
    char word[50];
    while (fscanf(fp, "%s", word) != EOF) {
        if (isKeyword(word))
            printf("Keyword: %s\n", word);
        else if (strchr("+-*/=;", word[0]))
            printf("Operator/Symbol: %s\n", word);
        else
            printf("Identifier: %s\n", word);
    }
    fclose(fp);
    return 0;
}
