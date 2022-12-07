#include<stdio.h>
#include<stdlib.h>
#define Num 20
int data[Num]={0};
int BinaryTree[Num]={0};

void CreateBinaryTree(int data[], int n){
	int node=1,i;
	for(i=0;i<Num;i++){
		BinaryTree[i]=0;
	}
	
	for(i=0;i<n;i++){
		BinaryTree[node]=data[i];
		node=node+1;
	}
}

void Postorder(int node){
	if(BinaryTree[node]!=0){
		Postorder(2*node);
		Postorder(2*node+1);
		if(BinaryTree[node]!=0){
			printf("%d ", BinaryTree[node]);
		}
	}
}

void Inorder(int node){
	if(BinaryTree[node]!=0){
		Inorder(2*node);
		if(BinaryTree[node]!=0){
			printf("%d ", BinaryTree[node]);
		}
		Inorder(2*node+1);
	}
}

void Preorder(int node){
	if(BinaryTree[node]!=0){
		if(BinaryTree[node]!=0){
			printf("%d ", BinaryTree[node]);
		}
		Preorder(2*node);
		Preorder(2*node+1);
	}
	
}
int main(){
	int n;
	printf("please enter the node amount: \n");
	scanf("%d",&n);
	
	printf("please enter the content of node: \n");
	int i;
	for(i=0; i<n;i++){
		scanf(" %d",&data[i]);
	}
	
	CreateBinaryTree(data, n);
	 
	
	printf("Inorder: \n");
	Inorder(1);
	printf("\n"); 
	
	printf("Postorder: \n");
	Postorder(1);
	printf("\n"); 
	
	printf("Pretorder: \n");
	Preorder(1);
	printf("\n"); 
	
	
}
