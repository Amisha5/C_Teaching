#include<stdio.h>
void main()
{
	int arr[10][10][10],row,col,r,c,count;
	printf("Enter number for row and column : ");
	scanf("%d %d %d",&count,&row,&col);
	for(count=0;count<row;count++)
	{
		printf("Enter Elements for matrix %d\n",count+1);
		for(r=0;r<row;r++)
		{
			for(c=0;c<col;c++)
			{
				scanf("%d",&arr[count][r][c]);
			}
		}	
	}
	
	for(count=0;count<row;count++)
	{
		printf("Elements of matrix %d\n",count+1);
		for(r=0;r<row;r++)
		{
			for(c=0;c<col;c++)
			{
				printf("%d ",arr[count][r][c]);
			}
			printf("\n");
		}
		printf("\n");	
	}
}
