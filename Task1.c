#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Enter any integer: ");
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of your integers is %d\n", sum);
    free(arr);

    return 0;
}