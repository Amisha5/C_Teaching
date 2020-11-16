
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, index , num1, num2;
    printf("Enter size: ");
    scanf("%d", &num1);

    ptr = (int*) malloc(num1 * sizeof(int));

    printf("Addresses of previously allocated memory: ");
    for(index = 0; index < num1; ++index)
    {
    	printf("%d\n",ptr + index);	
	}

    printf("\nEnter the new size: ");
    scanf("%d", &num2);

    // rellocating the memory
    ptr = realloc(ptr, num2 * sizeof(int));

    printf("Addresses of newly allocated memory: ");
    for(index = 0; index < num2; ++index)
         printf("%u\n", ptr + index);
  
    free(ptr);

    return 0;
}

