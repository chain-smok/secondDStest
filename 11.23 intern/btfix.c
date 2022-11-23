#include <stdio.h>
#include <stdlib.h>

#define Num 20

int data[Num]={0};
int BinaryTree[Num]={0};

void CreateBinaryTree(int data[],int n){
  int node=1,i;
  for(i=0;i<Num;i++){
    BinaryTree[i]=0;
  }
  for(int i=0;i<n;i++){
    BinaryTree[node]=data[i];
    node=node+1;
  }
}

int Postorder(int node,int n){
   if(node>n)return 0;
   if(BinaryTree[node]!=0){
     Postorder(2*node,n);
     Postorder(2*node+1,n);
     printf("%d ",BinaryTree[node]); 
   }
}

int Inorder(int node,int n){
  if(node>n)return 0;
  if(BinaryTree[node]!=0){
    Inorder(2*node,n);
    printf("%d ",BinaryTree[node]);
    Inorder(2*node+1,n);
  }
} 

int Preorder(int node,int n){
   if(node>n)return 0;	
   if(BinaryTree[node]!=0){
      printf("%d ",BinaryTree[node]);
      Preorder(2*node,n);
      Preorder(2*node+1,n);
   }
}
int main(){
 int n;
 printf("How many nodes: "); 
 scanf("%d",&n);
 printf("please enter the content of nodes:\n");
 for(int i=0;i<n;i++){
   scanf("%d",&data[i]);
 }
 CreateBinaryTree(data,n);
 printf("the result of prefix:\n");
 Preorder(1,n);
 printf("\n");
 
 printf("the result of infix:\n");
 Inorder(1,n);
 printf("\n");
 
 printf("the result of postfix:\n");
 Postorder(1,n);
 printf("\n");
}







