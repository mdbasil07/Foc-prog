#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100
int i,linearSearch(int arr[],int n,int key){
for(i=0;i<n;i++){
if(arr[i]==key){
return i;
}
}
return -1;
}
int main(){
int n, key, arr[MAX_SIZE], index=linearSearch(arr,n,key);
clrscr();
printf("Enter the number of elements: ");
scanf("%d", &n);
if(n<=0||n>MAX_SIZE){
printf("Invalid number of elements\n");
getch();
return 1;
}



    printf("Enter the elements of the array:\n");
    for ( i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }


    printf("Enter the element to search: ");
    scanf("%d", &key);



    if (index != -1) {
	printf("Element found at index %d\n", index);
    } else {
	printf("Element not found\n");
    }
 getch();
 return 0;
}