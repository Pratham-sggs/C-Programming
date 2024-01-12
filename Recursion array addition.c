#include<stdio.h>

int addition(int a[], int n, int c, int sum) {
    sum = sum + a[c];
    if (c == (n - 1)) {
        return sum;
    }
    else {
        return addition(a, n, c + 1, sum);
    }
}

int main() {
    int n, sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array: \n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] =", i + 1);
        scanf("%d", &a[i]);
    }
    sum = addition(a, n, 0, 0);
    printf("Sum of elements in the array = %d", sum);
    return 0;
}
