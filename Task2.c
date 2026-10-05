#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for(int i = 0; i < n; i++) {
        printf("Enter any integer: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double avg = (double) sum / n;

    printf("The average of your numbers is %.2f\n", avg);

    free(arr);

    return 0;
}