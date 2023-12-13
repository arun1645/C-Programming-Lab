#include <stdio.h>
#include <string.h>

int main() {
    char str[20]; // Declare a char array to store the string
    int len; // Declare a variable to store the length of the string

    printf("Enter a string: "); // Prompt the user to enter a string
    scanf("%s", str); // Read the string from the user and store it in the array

    len = strlen(str); // Find the length of the string and store it in the variable

    // Compare the characters of the string from the beginning and the end
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            printf("The string is not a palindrome\n"); // If any character does not match, the string is not a palindrome
            return 0;
        }
    }

    printf("The string is a palindrome\n"); // If the loop completes without any mismatch, the string is a palindrome

    return 0;
}
