#include<stdio.h>
int main()
{
    int array[100], position, i, n, value;
    printf("\nEnter number of elements in array:");
    scanf("%d", &n);
    printf("\n\nEnter %d elements\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("\n\nEnter the location where you want to insert new element:  ");
    scanf("%d", &position);
    printf("\n\nEnter the value to insert: ");
    scanf("%d", &value);

    // shifting the elements from (position to n) to right
    for(i = n-1; i >= position-1; i--)
        array[i+1] = array[i];

    array[position] = value;    // inserting the given value

    printf("\n\nResultant array is: ");
    /* 
        the array size gets increased by 1 
        after insertion of the element
    */
    for(i = 0; i <= n; i++) 
        printf("%d  ", array[i]);

    printf("\n");
    return 0;
}