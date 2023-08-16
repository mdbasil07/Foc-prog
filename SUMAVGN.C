#include <stdio.h>
#include <conio.h>
int main() {
 int n, num, sum = 0, i;
 float average;
 clrscr();
 printf("Enter the value of n: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) {
 printf("Enter number %d: ", i);
 scanf("%d", &num);
 sum += num;
 }
 average = (float) sum / n;
 printf("Sum = %d\n", sum);
 printf("Average = %.2f\n", average);
 getch();
 return 0;
}