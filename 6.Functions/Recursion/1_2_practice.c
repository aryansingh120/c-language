#include <stdio.h>

int main() {
    int num, square, digit, sum = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the square of the number
    square = num * num;

    // Calculate the sum of the digits of the square
    while (square != 0) {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }

    // Check if the sum of the digits of the square equals the original number
    if (sum == num) {
        printf("%d is a neon number.\n", num);
    } else {
        printf("%d is not a neon number.\n", num);
    }

    return 0;
}
