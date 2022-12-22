#include<stdio.h>
int main()
{
	int balance,money,a;
	printf("Available balance:5000\n");
	printf("Enter amount to withdarwl\n");
	
	scanf("%d",&money);
	
	if(money<5000)
	{
		printf("Money withdrawl successful");
		
	}
	
	else
	{
		printf("insufficient balance");
	}
	
}
