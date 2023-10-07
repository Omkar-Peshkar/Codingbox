#include<iostream>
using namespace std;
int linearsearch (int arr[],int n,int key)
{
    for (int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
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
    cout<<"Enter the elements of the array=";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched=";
    cin>>key;
    if(linearsearch(a,n,key)!=-1)
    {
    cout<<"element is present at="<<linearsearch(a,n,key)<<" position";
    }
    else
    {
        cout<<"Element is not present in the array";
    }

}