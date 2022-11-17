#include <stdio.h>
#define SIZE 1000
int arr[SIZE];
int swap(int *a,int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
}
void QuickSort(int start,int end){
    if(start>=end){
        return;
    }
    int key=start;
    int i=start+1;
    int j=end;
    int temp;
    while(i<=j){
      while(i<=end && arr[i]<=arr[key]){
        i++;
      } 
      while(j>start && arr[j]>=arr[key]){
        j--;
      }
       if(i>j){
         swap(&arr[key],&arr[j]);
       }else{
         swap(&arr[i],&arr[j]);
       }
       QuickSort(start,j-1);
       QuickSort(j+1,end);
    
    }
}
int main(){
   int i,n;
   scanf("%d",&n);
   for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
   }
   QuickSort(0,n-1);
   for(i=0;i<n;i++){
     printf("%d",arr[i]);
   }
}
