//        Q45 wap to find max subarray sum?  O(n^2)

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,maxsum=0,si=-1,ei=-1;
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
    int sum=0;
    for(j=i;j<n;j++)
    {
        sum+=a[j];
     
    }
    if(sum>maxsum)
    {
        si=i;
        ei=n-1;
        maxsum=sum;
    }
    if(a[i]>maxsum)
    {
        si=ei=i;
        maxsum=a[i];
    }
}
cout<<"Maximum sum 0f subarray="<<maxsum<<" which is from "<<si<<" to "<<ei;

}