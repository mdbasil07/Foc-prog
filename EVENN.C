#include<stdio.h>
#include<conio.h>
int main(){
int n,i;
clrscr();
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<=n;i+=2){
printf("the even number:%d\n",i);
}
getch();
return 0;
}
