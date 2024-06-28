#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char c;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    printf("Enter a character to search for: ");
    scanf(" %c", &c);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            count++;
        }
    }

    if (count > 0) {
        printf("Character '%c' found %d times.\n", c, count);
    } else {
        printf("Character '%c' not found.\n", c);
    }

    return 0;
}