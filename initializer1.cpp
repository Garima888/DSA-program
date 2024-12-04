#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4,5,3,45,34,56,58};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}