#include<iostream>
using namespace std;

void change(int x[])
{
    x[0]=10;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    cout<<arr[0]<<endl;
    change(arr);
    cout<<arr[0]<<endl;
    return 0;
}