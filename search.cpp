#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i, arr[10], search, first, last, middle;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("Enter elements (in ascending order): ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to be search: ");
    scanf("%d", &search);
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<search)
            first = middle+1;
        else if(arr[middle]==search)
        {
            printf("\nThe number, %d found at Position %d", search, middle+1);
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        printf("\nThe number, %d is not found in given Array", search);
    getch();
    return 0;
}
