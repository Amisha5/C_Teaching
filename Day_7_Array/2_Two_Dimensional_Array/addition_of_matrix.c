#include<stdio.h>
void main()
{
	int arr1[10][10],arr2[10][10],sum[10][10],row,col,r,c;
	printf("Enter number for row and column : ");
	scanf("%d %d",&row,&col);
	printf("enter elements of first matrix : ");
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			scanf("%d",&arr1[r][c]);
		}
	}
	printf("enter elements of second matrix : ");
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			scanf("%d",&arr2[r][c]);
		}
	}
	
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			sum[r][c]=arr1[r][c]+arr2[r][c];
		}
	}
	printf("\nSum of two matrix is:\n");
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("%d ",sum[r][c]);
		}
		printf("\n");
	}
}
