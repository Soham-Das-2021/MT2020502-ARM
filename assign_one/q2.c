#include<stdio.h>

int main()
{
	int a[15], max=0, i, j;
	
	printf("Please enter 15 integers:\n");
	for(i=0;i<15;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<15;j++)
	{
		if(a[j]>max)
		{
			max=a[j];
		}
	}
	
	printf("The largest integer:%d",max);
}
