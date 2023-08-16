#include <stdio.h>
#include <conio.h>
int main() {
 int n, i, sum = 0;
 clrscr();
 printf("Enter the value of n: ");
 scanf("%d", &n);
 for (i = 2; i <= n; i += 2) {
 int term = i * i;
 sum += term;
 }
 printf("Sum of the series: %d\n", sum);
 getch();
 return 0;
}