#include <stdio.h>
#include <conio.h>
int main() {
 int N, i, sum = 0;
 clrscr();
 printf("Enter the value of N: ");
 scanf("%d", &N);
 for (i = 1; i <= N; i++) {
 int term = i * i;
 sum += term;
 }
 printf("Sum of the series: %d\n", sum);
 getch();
 return 0;
}