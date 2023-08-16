#include <stdio.h>
#include <conio.h>
int main() {
 int n, i, cube, sum = 0;
clrscr();
 printf("Enter the value of n: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) {
 cube = i * i * i;
 sum += cube;
 }
 printf("Sum of cubes of numbers from 1 to %d is: %d",n,sum);
 getch();
 return 0;
}
