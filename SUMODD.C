#include<stdio.h>
#include<conio.h>
int main(){
int n,i,sum=0;
clrscr();
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i+=2){
 sum=sum+i;
 }
printf("sum:%d",sum);
getch();
return 0;
}
