#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], *ptr;
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr; // Pointer to the first element of array

    for (i = 0; i < n; i++)
        sum += *(ptr + i);

    printf("Sum of array elements = %d\n", sum);
    return 0;
}
