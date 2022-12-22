#include<stdio.h>
int main()
{
	int a,p,sum=0;
	printf("enter number");
	scanf("%d",&a);
	while(a>0)
	{
		p=a%10;
		sum=sum+p;
		a=a/10;
	}
	printf("%d",sum);
}
