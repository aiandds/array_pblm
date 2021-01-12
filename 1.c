#include <stdio.h>
int main(void)
{
        int size, i, largest, array[20], tmpe;
        printf("\n Enter the size of the array: ");
        scanf("%d", &size);
        printf("\n Enter %d elements of  the array: \n", size);
        for (i = 0; i < size; i++)
        {   
            scanf("%d", &array[i]);
            
        }
        largest = array[0];

        for (i = 1; i < size; i++) 
        {
            if (largest < array[i])
            largest = array[i+1];
        }


        printf("\n largest element present in the given array is : %d\n", largest);
        return 0;
}
