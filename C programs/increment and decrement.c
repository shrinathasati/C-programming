#include<stdio.h>
int main()
{
	int array[]={3,0,8,1,12,8,9,2,13,10};
	int x,y,z;
	x=++array[2];
	y=array[2]++;
	z=array[x++];
	printf("%d %d %d",x,y,z);
}
