#include<stdio.h>
#include<conio.h>
int main(){
int i,n,a,b,c;
clrscr();
printf("enter the series:");
scanf("%d",&n);
printf("0 1");
a=0;
b=1;
c=a+b;
while(c<=n){
 printf(" %d",c);
a=b;
b=c;
c=a+b;
}
getch();
return 0;

}