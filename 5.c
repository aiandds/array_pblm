#include <stdio.h>
int main(void)
{
        int i;
        int position = 6;
        int array[10] = {5, -3, 7, 6, 2, 1, 8, 3, 0, 4};

        for ( i = position; i < 10; i++)
        {
            array[i] = array[i + 1];
        }
        
        printf("The array elements are: ");
        for(i = 0; i < 9; i++)
        {
            printf("%d  ",array[i]);
        }

        printf("\n");

}