#include <stdio.h>
int main(){
  int data;
  int train_num;
  int train[60];
  int temp;
  scanf("%d",&data);
  while(data--){
    scanf("%d",&train_num);
    int count=0;
    int i;
    for(i=0;i<train_num;i++){
       scanf("%d",&train[i]);
    }
    for(i=0;i<train_num-1;i++){
      int j;
      for(j=0;j<train_num-1-i;j++){
        if(train[j]>train[j+1]){
          temp=train[j];
          train[j]=train[j+1];
          train[j+1]=temp;
          count++;
        }
      }    
    }
    printf("Optimical train swapping takes %d swaps.\n",count); 
  }
}
