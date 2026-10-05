#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int *arr = malloc(10 * sizeof(int));

    for(int i = 0; i < 10; i++) {
        printf("Enter any integer: ");
        scanf("%d", &arr[i]);
    }

    int *temp = realloc(arr, 5 * sizeof(int));
    arr = temp;

    printf("The first 5 values are: ");

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    free(arr);

    return 0;
}