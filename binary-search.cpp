#include<iostream>
using namespace std;

bool binarypresent(int arr[], int start, int end, int key)
{
    if(start>end)
    return false;

    int mid = start + (end-start)/2;
    if(key==arr[mid])
    return true;

    else if(key<arr[mid])
    {
        end = mid-1;
        return binarypresent(arr,start,end,key);
    }

    else if(key>arr[mid])
    {
        start = mid+1;
        return binarypresent(arr,start,end,key);
    }

}

int main()
{

    int arr[] = {1,2,3,4,5};
    int key = 52;
    int length = sizeof(arr)/sizeof(arr[0]);
    if(binarypresent( arr , 0 , length-1 , key ))
    cout<<"Element is present";
    else
    cout<<"Element is absent";

}