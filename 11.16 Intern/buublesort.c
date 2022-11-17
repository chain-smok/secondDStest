#include <stdio.h>
int main(){
  int v[6],i;
  for(i=0;i<6;i++){
    scanf("%d",&v[i]);
  }
  for(i=0;i<6;i++){
     printf("%d",v[i]);
  }
  printf("\n");
  int j;
  for(i=0;i<5;i++){
     for(j=0;j<5-i;j++){
          if(v[j]>v[j+1]){
            int temp=v[j];
            v[j]=v[j+1];
            v[j+1]=temp;
          }   
     }
  }
  for(i=0;i<6;i++){
     printf("%d",v[i]);
  }
}


