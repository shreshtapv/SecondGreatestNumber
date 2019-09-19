#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,array[20],first=0,second=0;
	printf("Enter the count of numbers: ");
	scanf("%d",&n);
	printf("\nEnter the numbers one by one : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]>first)
		{
			second=first;
			first=array[i];
		}
		else if(array[i]>second && array[i]!=first)
		{
			second=array[i];
		}
	}
	if(second==0)
		printf("\nThere's no second greatest number");
	else
		printf("\nThe second greatest number is %d",second);
}
