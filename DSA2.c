// selection sort program
#include<stdio.h>

int main()
{
    int arr[10];
    int i,j,min;
    int swap;
    int n=6;
    printf("\n enter array data:");
    for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("\n");
    for(i=0; i<n-1; i++){
        min = i;
        for(j=i+1; j<n; j++) {
            if(arr[min]>arr[j]){
              min = j;
             } }
            if(min != i) {
                swap = arr[i];
                arr[i] = arr[min];
               arr[min] = swap;
            } }
            printf("\n sorted elements are: ");
            for(i=0; i<n; i++){
                printf("\t%d",arr[i]);
    }    
return 0;
}