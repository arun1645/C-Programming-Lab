//WAP TO CHECK IF A NUMBER IS PRIME OR NOT BY USING WHILE LOOP
#include <stdio.h>
#include <math.h>
int isPrime(int n) {
 if (n < 2) {
    return 0;
  }
  int d = 2;
 while (d <= sqrt(n)) {
    if (n % d == 0) {
      return 0;
    }
   d++;
  }
  return 1;
}
int main() {
   int num;
   printf("Enter a number: ");
  scanf("%d", &num);
   if (isPrime(num)) {
    printf("%d is a prime number.\n", num);
  }
  else {
    printf("%d is not a prime number.\n", num);
  }
   return 0;
}



