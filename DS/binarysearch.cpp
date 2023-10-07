#include<iostream>
using namespace std;
int binarysearch (int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(n>0)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid+1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;

        }
        else{
            e=mid-1;
        }
    }
    return -1;

}
int main()
{
    int n,key;
    cout<<"Enter the size of array=";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array in sorted manner=";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched=";
    cin>>key;
    if(binarysearch(a,n,key)!=-1)
    {
    cout<<"element is present at="<<binarysearch(a,n,key)<<" position";
    }
    else
    {
        cout<<"Element is not present in the array";
    }

}