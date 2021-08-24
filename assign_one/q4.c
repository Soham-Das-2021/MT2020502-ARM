#include<stdio.h>

int main()
{
	int a[20], i, j, k, l, temp;
	
	printf("Please enter 20 integers:\n");
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<19;j++)                 //Bubble Sort has been used
	{
		int flag=0;
		for(k=0;k<19-j;k++)
		{
			if(a[k]>a[k+1])
			{
			  temp=a[k];
			  a[k]=a[k+1];
			  a[k+1]=temp;	
			  flag=1;
			}
		}
		if(flag==0)
		   break;
		
	}
	
	printf("The sorted array:");
	for(l=0;l<20;l++)
	{
		printf("\n%d",a[l]);
	}
}
