// Q48 wap to find sum of 2 no from given array is k or not?
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,high,low=0;
    bool flag=false;
    cout<<"Enter the no of elements in the array=";
    cin>>n;
    int a[n];
    high=n-1;
    cout<<"Enter the elemets=";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value for K=";
    cin>>k;
    while(low<high)
    {
        if(a[low]+a[high]>k)
        {
            high--;
        }
       else if(a[low]+a[high]<k)
        {
          low++;
        }
        else{
            flag=true;
            break;
        }
      
    }
    if(flag==true)
    {
        cout<<"Sum found";
    }
    else{
        cout<<"Sum not found";
    }

}