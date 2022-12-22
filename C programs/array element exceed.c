#include<stdio.h>
int main(){
	int arr[3]={1,2,3,4,5};

	for(int j=0;j<5;j++){
		printf("%d\n",arr[j]);
	}
	printf("\nprinting adderess\n\n");
	printf("%d\n",&arr[0]);
	printf("%d\n",&arr[1]);
	printf("%d\n",&arr[2]);
	printf("%d\n",&arr[3]);
	printf("%d\n",&arr[4]);

}
