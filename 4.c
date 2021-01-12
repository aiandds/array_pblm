#include <stdio.h>
int main(void)
{
        int i;
        int array[10] = {5, -3, 7, 6, 2, 1, 8, 3, 0, 4};

        printf("The array elements are: ");
        for(i = 0; i < 10; i++)
        {
            printf("%d  ",array[i]);
        }

        printf("\n");

}