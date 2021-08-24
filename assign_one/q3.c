#include<stdio.h>

int main()
{
	int a[20], count=0, i, j;
	
	printf("Please enter 20 integers:\n");
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<20;j++)
	{
		if(a[j]%2==0)
		{
			count++;
		}
	}
	
	printf("The number of even integers:%d",count);
}
