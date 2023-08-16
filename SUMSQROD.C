#include <stdio.h>
#include <conio.h>
int main() {
 int n,i, sum = 0;
 clrscr();
 printf("Enter the value of n: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) {
 if (i % 2 != 0) {
 sum += (i * i);
 }
 }
 printf("Sum of squares of odd numbers: %d\n", sum);
 getch();
 return 0;
}
