//insertion sort program
#include<stdio.h>

int main()
{
    int arr[10];
    int i,j,k,temp;
    int n=6;
    printf(" enter array data:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("\t%d",arr[i]);
    }
    for(i=1; i<n; i++)
    {
        temp=arr[i];
        j=i-1;
         while((temp<arr[j]) && (j>=0)) {
                            arr[j+1]=arr[j];
                            j--;
         }
                    arr[j+1]=temp;
         }
         printf("\n sorted elements are:");
        for(i=0; i<n; i++)
        {
            printf("\t%d",arr[i]);
        }   
    printf("\n");  
    return 0;
    }