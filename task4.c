#include <stdio.h>
#include <string.h>

void compress(char* str) {
    int count, i;
    for (i = 0; str[i]; i++) {
        printf("%c", str[i]);
        count = 1;
        while (str[i] == str[i+1]) {
            count++;
            i++;
        }
        printf("%d", count);
    }
    printf("\n");
}

void decompress(char* str) {
    int i = 0;
    while (str[i]) {
        char ch = str[i++];
        int count = str[i++] - '0';
        for (int j = 0; j < count; j++)
            printf("%c", ch);
    }
    printf("\n");
}

int main() {
    char input[] = "aaabbcccc";
    printf("Original: %s\n", input);
    printf("Compressed: ");
    compress(input);

    char encoded[] = "a3b2c4";
    printf("Decompressed: ");
    decompress(encoded);
    return 0;
}
