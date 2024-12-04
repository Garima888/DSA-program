#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    arr[0]=3;
 //   arr[1]=67;
    arr[2]=38;
    arr[3]=5;
    arr[4]=90;
    cout<<arr[0]<<endl;
    arr[0]=100;
    cout<<arr[0]<<endl;
    cin>>arr[1];
    cout<<arr[1];
    for(int i=0; i<=4; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}