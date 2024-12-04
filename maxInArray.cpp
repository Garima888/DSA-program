
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,6,7,87,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int mx = arr[0];
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i=0; i<n; i++)
    {
      //  if(mx < arr[i])
      // mx = arr[i];
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
    }
    cout<<mx<<" "<<mn;
     return 0;
}