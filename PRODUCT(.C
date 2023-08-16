#include <stdio.h>
#include <conio.h>
int main() {
 int n,i,product=1;
 printf("Enter a number: ");
 clrscr();
 scanf("%d", &n);
 for (i = 1; i <= n; i++) {
 product *= i;
 }
 printf("Product series: %d\n", product);
 getch();
 return 0;
}