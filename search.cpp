#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,6,7,87,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter target";
    cin>>x;


    for(int i=0; i<=n; i++){
    if(arr[i] == x)
    {
        cout<<x<<"is present";
        break;
    }
    }
     return 0;
}