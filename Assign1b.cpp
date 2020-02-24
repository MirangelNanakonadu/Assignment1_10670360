#include<iostream>
using namespace std;

int main()
{
    int arr[10],n, x,max,min;
    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(x=0;x<n;x++)
        cin>>arr[x];
    max=arr[0];
    for(x=0;x<n;x++)
    {

    if(max<arr[x])
        max=arr[x];
    }
    min=arr[0];
    for(x=0;x<n;x++)
    {

        if(min>arr[x])
            min=arr[x];
    }
    cout<<"Maximum Element is "<<max;
    cout<<"Minimum Element is "<<min;
    return 0;
}
