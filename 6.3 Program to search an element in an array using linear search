#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {12, 34, 10, 6, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int position = linearSearch(arr, size, key);

    if (position == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at position: %d\n", position + 1);
    }

    return 0;
}
