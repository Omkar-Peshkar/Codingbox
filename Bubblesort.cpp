#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
   int i,j,temp;
   for(i=n-1;i>=0;i--)
   {
    for(j=0;j<=i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
   }
cout<<"Sorted array=="<<endl;
for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
}
int main()
{
    int n;
    cout<<"Enter the size of array=";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array=";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);

}