#include <stdio.h>

unsigned long long factorial_recursive(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

unsigned long long factorial_iterative(int n) {
    int i;
    unsigned long long result = 1;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number (less than 50): ");
    scanf("%d", &num);

    if (num < 0 || num >= 50) {
        printf("Please enter a valid number.\n");
        return 1;
    }

    printf("Recursive Factorial: %llu\n", factorial_recursive(num));
    printf("Iterative Factorial: %llu\n", factorial_iterative(num));

    return 0;
}

