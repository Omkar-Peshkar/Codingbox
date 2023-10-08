    //    Q39 wap for given an array of size n.Output sum of each subarray of given array?
#include<iostream>
using namespace std;
int main()
{
    int n,i,k,j,Sum=0,sum=0;
    cout<<"Enter the elements in array=";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array=";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
         sum+=a[j];
         Sum+=sum;
         cout<<a[i]<<" to "<<a[j]<<" Sum="<<sum<<endl;
        }
    }
    cout<<"Total sum of all subarrays="<<Sum;
    return 0;
}