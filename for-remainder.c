#include <stdio.h>  // Include the standard input/output library

int main() {
    // Declare variables for the dividend, divisor, and remainder
    int dividend, divisor, remainder;

    // Prompt the user to enter the dividend
    printf("Enter the dividend: ");
    scanf("%d", &dividend);  // Read the dividend from the user

    // Prompt the user to enter the divisor
    printf("Enter the divisor: ");
    scanf("%d", &divisor);  // Read the divisor from the user

    // Calculate the remainder using the modulus operator
    remainder = dividend % divisor;

    // Print the result
    printf("The remainder of %d divided by %d is %d\n", dividend, divisor, remainder);

    return 0;  // Indicate that the program ended successfully
}
