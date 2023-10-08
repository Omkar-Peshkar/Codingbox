#include<iostream>
using namespace std;
void insertion(int a[],int n)
{

    for(int i=1;i<n;i++)
    {
        int current=a[i];
        int j=i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
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
    cout<<"Enter the elements of the array in sorted manner=";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion(a,n);

}