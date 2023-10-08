//       Q37 wap to take n numbers from user and find the min and max element and sum of array?
#include<iostream>
using namespace std;
int main()
{
    int n,minno,maxno,sum=0;
    cout<<"Enter the number of element you want in array=";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    maxno=arr[0];
    minno=arr[0];
    for(int i=0;i<n;i++)
    {
       maxno=max(arr[i],maxno);
       minno=min(arr[i],minno);

    }
        cout<<"Maximun element="<<maxno<<endl<<"Minimum element="<<minno;
    cout<<"Sum="<<sum;  

}