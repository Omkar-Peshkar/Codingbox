// Q42 Problem Given an array arr[] of size N. The task is to find the first repeating element in an
//     array of integers, i.e., an element that occurs more than once and whose index of
//     first occurrence is smallest.
//     Constraints
//     1 <= N <= 106
//     0 <= Ai <= 106

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,mr=0,index=-1;
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
    int r=1;
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            r++;
        }
    }
    if(r>mr)
    {
        mr=r;
        index=i;
    
    }
  }
    cout<<"Highest repeating element with smallest index="<<a[index]<<" which is repeated "<<mr<<" times";

}