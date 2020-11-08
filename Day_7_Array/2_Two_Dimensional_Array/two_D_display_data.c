#include<stdio.h>
void main()
{
	int arr1[2][2]={11,22,33,44},arr2[10][10],row,col,r,c;
	printf("Enter number for row and column : ");
	scanf("%d %d",&row,&col);
	printf("enter elements in second array : ");
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			scanf("%d",&arr2[r][c]);
		}
	}
	printf("Elements of first array is: ");
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("%d ",arr1[r][c]);
		}
	}
	printf("\nElements of second array is: ");
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("%d ",arr2[r][c]);
		}
	}
}
