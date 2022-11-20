#include <stdio.h>
int main()
{
    int a[10] , i , item , n;
    printf("Enter number of elements of an array: \n");
    scanf("%d" , &n);
    printf("\nEnter elements: \n");
    for(i = 0 ; i<n ; i++)
    {
        scanf("%d" , &a[i]);
    }
    printf("\nEnter item to search: \n");
    scanf("%d" , &item);
    for(i=0 ; i<n ; i++)
    if (item == a[i])
    {
        printf("Item found at location %d" , i+1);
        break;
    }
    if (i>9)
        printf("\nItem does not exist.");
    return 0;
}
