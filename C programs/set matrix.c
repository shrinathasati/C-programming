#include<stdio.h>
int main(){
	int arr[2][2];
	printf("sets the elements of array:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("enter the elemnet a[%d][%d]\n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("the matrix is:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
