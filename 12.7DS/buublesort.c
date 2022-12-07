#include <stdio.h>
int main(){
 int number,temp;
 scanf("%d",&number);
 
 int arr[number],i;
 for(i=0;i<number;i++){
   scanf("%d",&arr[i]);
 }
 int j;
 for(i=0;i<number-1;i++){
   for(j=0;j<number-i-1;j++){
     if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
     }
   }
 }
 
 for(i=0;i<number;i++){
    printf("%d ",arr[i]);
 }
 printf("\n");


}
