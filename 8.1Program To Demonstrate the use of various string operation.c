#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello"; // Declare and initialize a string
    char str2[20]; // Declare another string
    char str3[20] = "World"; // Declare and initialize another string
    char *sub; // Declare a pointer to store the substring

    // Find the length of str1
    printf("The length of str1 is %zu\n", strlen(str1));

    // Copy str1 to str2
    strcpy(str2, str1);
    printf("The copy of str1 is %s\n", str2);

    // Concatenate str3 to str1
    strcat(str1, str3);
    printf("The concatenation of str1 and str3 is %s\n", str1);

    // Compare str1 and str2
    int result = strcmp(str1, str2);
    if (result < 0) {
        printf("str1 is less than str2\n");
    } else if (result > 0) {
        printf("str1 is greater than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }

    // Search for "or" in str1
    sub = strstr(str1, "or");
    if (sub != NULL) {
        printf("The substring \"or\" is found in str1 at position %ld\n", sub - str1);
    } else {
        printf("The substring \"or\" is not found in str1\n");
    }

    return 0;
}
