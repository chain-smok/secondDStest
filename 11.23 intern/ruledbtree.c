#include <stdio.h>
#include <string.h>

void CreateBTree(int btree[],int data[],int n){
 int i,j;
 btree[1]=data[1];
 for(i=2;i<=n;i++){
  j=1;
  while(btree[j]!=0){
    if(data[i]>btree[j]){
      j=j*2+1;
    }else{
      j=j*2;
    }
  }
  btree[j]=data[i];
 }
}
int main(){

  int length;
  printf("How many nodes:");
  scanf("%d",&length);
  int data[length];
  data[0]=0;
  int i;
  printf("please enter the content of nodes:\n");
  for(i=1;i<=length;i++){
    scanf("%d",&data[i]);
  }
  int btree[16]={0};
  printf("original content:\n");
  for(i=0;i<=length;i++){
    printf("data[%d]:%d\n",i,data[i]);
  }
printf("\n");

CreateBTree(btree,data,length);
printf("the content of btree: \n");
for(i=0;i<16;i++){
  printf("btree[%d]:%d\n",i,btree[i]);
}
printf("\n");
}
