#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	printf("DETAILS OF CANDICATE\n");
	printf("Candicate 1:-Ashish patel\n");
	printf("candicate 2:-Chhutu yadav\n");
	printf("Candicate 3:-Kailsh shelar\n");
	printf("GIVE YOUR PRECIOUS VOTE\n");
	printf("start voting\n");
	
	for(int i=1;i<=3;i++)
	{
		int vote;
		printf("voter no.:-%d\n",i);
		scanf("%d",&vote);
		if(vote==1)
		{
			a++;
			printf("you have successfully given vote.\n\n");
			
		}
		else if(vote==2)
		{
			b++;	
			printf("you have successfully given vote.\n\n");
		}
		else if(vote==3)
		{
			c++;
			printf("you have successfully given vote.\n\n");
			
		}
		else
		{
			printf("invaild choice\n");
			
		}
	}
	printf("voting ends\n\n");
	printf("RESULTS:-\n");
	printf("ASHISH PATEL HAS GOT VOTE:- %d\n",a);
	printf("CHHUTU YADAV HAS GOT VOTE:- %d\n",b);
	printf("KAILSH SHELAR HAS GOT VOTE:- %d",c);
}
