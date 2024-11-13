#include<stdio.h>

int main()
{
    int arr[8];
    int i,a,b;
    int n=5;
    printf("\n enter array element: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("\n");
    printf("\n enter a position of array to insert an new element ",n);
    scanf("%d",&a);
    printf("\n enter a new element:");
    scanf("%d",&b);
    for(i=n; i>a; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[a]=b;
    n++;
    printf("\n updated array is: ");
    for(i=0; i<n; i++)
    {
        printf("\t%d",arr[i]);
    }
return 0;
}