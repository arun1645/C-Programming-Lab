#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int f = 0, s = 1;

  // initialize the next term (3rd term)
  int nextTerm = f + s;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms f and s
  printf("Fibonacci Series: %d, %d, ", f, s);

  // print 3rd to nth terms
  for (i = 0; i<10; i++) {
    printf("%d, ", nextTerm);
    f = s;
    s = nextTerm;
    nextTerm = f + s;
  }

  return 0;
}
