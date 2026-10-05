#include <stdio.h>
#include <stdlib.h>

int main() {

    char **strings = malloc(3 * sizeof(*strings));

    for (int i = 0; i < 3; i++) {
        strings[i] = malloc(51 * sizeof(char));
    }

    for (int i = 0; i < 3; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%50s", strings[i]);
    }

    printf("The first 3 strings are:\n");

    for (int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }

    char **temp = realloc(strings, 5 * sizeof(*strings));
    strings = temp;

    for(int i = 3; i < 5; i++) {
        strings[i] = malloc(51 * sizeof(char));
    }

    for(int i = 3; i < 5; i++) {
        printf("Enter the new strings: ");
        scanf("%50s", strings[i]);
    }

    printf("All 5 strings:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < 3; i++) {
        free(strings[i]);
    }


    free(strings);

    return 0;
}