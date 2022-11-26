#include <stdio.h>
#include <stdlib.h>

void fun1(int* a,int n){
	int k;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+i)>*(a+j)){
				k=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=k;
			}
		}
	}
}
int main() {
	printf("Enter the size of array\n");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array\n");
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Unsorted array\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	fun1(arr,5);
	printf("Sorted array\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}