#include<stdio.h>
int main()
{
	int a,r,b,h,area1,area2,area3;
	int ch;
	printf("area of circle press1\n");
		printf("area of square press2\n");
			printf("area of traingle press3\n");
	printf("enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
	printf("enter radius\n");
	scanf("%d",&r);
		area1=22*r*r/7;
		printf("%d",area1);
		break;
		case 2:
				printf("enter side \n");
	scanf("%d",&a);
		area2=a*a;
		printf("%d",area2);
		break;
		case 3:
			printf("enter base and height\n");
	scanf("%d %d",&b,&h);
		area3=1*b*h/2;
		printf("%d",area3);
		break;
		default:
			printf("invalid choice");
	}
}
