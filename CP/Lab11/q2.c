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

void fun2(int **ptr,int m,int n){
	int l;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
			if(*(*(ptr+i)+j)>*(*(ptr+i)+k)){
				l=*(*(ptr+i)+j);
				*(*(ptr+i)+j)=*(*(ptr+i)+k);
				*(*(ptr+i)+k)=l;
			}
		}
	}
	}
	int z;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(*(*(ptr+i)+0)>(*(*(ptr+j)+0))){
				z=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=z;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int **arr2D = (int **)malloc(atoi(argv[1])*sizeof(int*));
	printf("Enter the elements of array\n");
	for(int i=0;i<atoi(argv[1]);i++){
		arr2D[i]=(int *)malloc(atoi(argv[2])*sizeof(int));
		for(int j=0;j<atoi(argv[2]);j++){
			scanf("%d",&arr2D[i][j]);
		}
	}
	printf("Unsorted array\n");
	for(int i=0;i<atoi(argv[1]);i++){
		for(int j=0;j<atoi(argv[2]);j++){
		printf("%d ",arr2D[i][j]);
	    }
	    printf("\n");
	}
	printf("\n");
	fun2(arr2D,atoi(argv[1]),atoi(argv[2]));
	printf("Sorted array\n");
	for(int i=0;i<atoi(argv[1]);i++){
		for(int j=0;j<atoi(argv[2]);j++){
		printf("%d ",arr2D[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}