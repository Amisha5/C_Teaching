#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, index, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    ptr = (int*) calloc(num, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements: ");
    for(index= 0; index < num; ++index)
    {
        scanf("%d", ptr + index);
        sum += *(ptr + index);
    }

    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}
