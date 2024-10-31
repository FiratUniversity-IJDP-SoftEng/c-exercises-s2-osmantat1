#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    printf("Enter a number to calculate its factorial (must be less than 50): ");
    scanf("%d", &number);

    if (number < 0 || number >= 50) {
        printf(" You entered invalid value");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %llu\n", number, factorial);
    }

    return 0;
}
