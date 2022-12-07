#include<stdio.h>
#include<string.h>

void CreateBinaryTree(int btree[], int data[], int n){
	int i,j;
	btree[1]=data[1];
	for(i=2;i<=n;i++){
		j=1;
		while(btree[j]!=0){
			if(data[i]>btree[j]){
				j=j*2+1;
			}
			else{
				j=j*2;
			}
		}
		btree[j]=data[i];
	}
}
int main(){
	int length;
	printf("please enter the node amount: ");
	scanf("%d", &length);
	
	int data[length];
	data[0]={0};
	int i;
	printf("please enter all these content of %d node: \n",length);
	for(i=1;i<length+1;i++){
		scanf("%d", &data[i]);
	}
	int btree[16]={0};
	
	printf("original content: \n");
	for(i=0;i<length;i++){
		
		printf("[%d] : %d\n",i ,data[i]);
	}
	printf("\n");



	CreateBinaryTree(btree, data, length);	
	
	printf("binary tree content: \n");
	for(i=0;i<16;i++){
		
		printf("[%d] : %d\n",i ,btree[i]);
	}
	printf("\n");
	
	
	
	
	
	
	
	return 0;
}
