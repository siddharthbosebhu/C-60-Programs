#include <stdio.h>

int main() {
    int n, num, j, flag;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    for (num = 2; num <= n; num++) {
        flag = 0;
        for (j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", num);
    }
    return 0;
}
