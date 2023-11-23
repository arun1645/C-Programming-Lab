#include <stdio.h>

int main() {
    int n;
    double arr[100];

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    double maxElement = arr[0];
    int maxElementIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxElementIndex = i;
        }
    }

    printf("Largest element = %.2lf\n", maxElement);
    printf("Index of the largest element = %d\n", maxElementIndex);

    return 0;
}
