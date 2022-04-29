#include <stdio.h>
#include <conio.h>
int main() {
  
  clrscr();

  int i, n;

  // initialize first and second terms
  int a = 0, b = 1;

  // initialize the next term (3rd term)
  int next = a + b;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms a and b
  printf("Fibonacci Series: %d, %d, ", a, b);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    a = b;
    b = next;
    next = a + b;
    getch();
  }

  return 0;
}
