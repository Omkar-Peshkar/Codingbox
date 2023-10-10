//        Q46 wap to find max subarray sum?  O(n) using kedane algorithem
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum,currentsum=0,maxsum=0;
    cout<<"Enter the no of elements in the array=";
    cin>>n;
    int a[n];
    cout<<"Enter the elemets=";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
     currentsum+=a[i];
     if(currentsum<0)
     {
        currentsum=0;
     }
     if(currentsum>maxsum)
     {
        maxsum=currentsum;
     }
    }
    cout<<"Max sum of subarray="<<maxsum;
}