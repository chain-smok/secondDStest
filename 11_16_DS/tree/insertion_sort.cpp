#include<stdio.h>
void insertion_sort(int arr[], int n){
	int i;
	
	for(i=0;i<n;i++){
		int j=i;
		while(j>0 && arr[j-1]>arr[j]){ 
			int temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
	
}
int main(){
	int a[5],i;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	insertion_sort(a,5);
	
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
} 
