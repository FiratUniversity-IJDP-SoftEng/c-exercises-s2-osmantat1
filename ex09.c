#include <stdio.h>

int main() {
    int number, count = 0, sum = 0;
    float average;

    printf("Enter numbers (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &number);
        
        if (number == -1) {
            break;
        }

        sum += number;
        count++;
    }

    if (count > 0) {
        average = (float)sum / count;
        printf("Count of numbers entered: %d\n", count);
        printf("Sum of numbers: %d\n", sum);
        printf("Average of numbers: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}
