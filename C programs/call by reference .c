#include<stdio.h>

void swappointer(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a,b;
	printf("the value of a\n");
	scanf("%d",&a);
	printf("the value of b\n");
	scanf("%d",&b);
	swappointer(&a,&b);
	printf("the value of a %d\n",a);
	printf("the valude of b %d",b);
return 0;}
