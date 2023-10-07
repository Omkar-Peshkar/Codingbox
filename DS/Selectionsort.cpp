#include<iostream>
using namespace std;
int selectionsort(int arr[],int n)
{
    int temp;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[i])
        {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
    }
  }
  cout<<"Sorted array=="<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
}
int main()
{
    int n;
    cout<<"Enter the size of array=";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array in sorted manner=";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selectionsort(a,n);

}