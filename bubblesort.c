// Bubble sort program
#include<stdio.h>

int main()
{
    int arr[10];
    int i,j;
    int ptr,exchange;
    int n=6;
    printf("\n enter array data:");
    for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        printf("\t%d",arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
     //   i=0;
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                exchange=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=exchange;
            }
    
        }
    }
    printf("\n sorted array is:");
    for(i=0; i<n; i++){
    printf("\t%d",arr[i]);
    }
    printf("\n");
return 0;
}

