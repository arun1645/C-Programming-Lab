#include <stdio.h>

int main()
{
    int n, i, fact = 1; // Declare variables to store the number, the loop counter and the factorial
    printf("Enter a positive integer: "); // Prompt the user to enter a number
    scanf("%d", &n); // Read the input from the user and store it in n
    for (i = 1; i <= n; i++) // Loop from 1 to n
    {
        fact = fact * i; // Multiply the factorial by i
    }
    printf("Factorial of %d is %d\n", n, fact); // Print the factorial of n
    return 0; // Return 0 to indicate successful execution
}
