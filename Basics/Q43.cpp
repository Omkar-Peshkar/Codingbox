// Q43 Problem
// Given an unsorted array A of size N of non-negative integers, find a continuous
// subarray which adds to a given number S.
// Constraints
// 1 <= N <= 105
// 0 <= Ai <= 1010

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum,S,si=-1,ei=-1;
    cout<<"Enter the no of elements in the array=";
    cin>>n;
    int a[n];
    cout<<"Enter the elemets=";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the Sum for subarray=";
    cin>>S;
    for(i=0;i<n;i++)
    {
        int sum=a[i];
        if(S==a[i])
        {
            si=i;
            ei=-1;
        }
        for(j=i+1;j<n;j++)
        {
           
            sum+=a[j];
            if(S==sum)
            {
                si=i;
                ei=j;
                break;
            }
        }
    }

    if(si==-1 && ei==-1)
    {
        cout<<"No subarray with this sum present";
    }
    else if(ei==-1)
    {
        cout<<"subarray having 1 element satisfy the requirement i.e="<<si;
    }
    else{
        cout<<"subarray starting from index "<<si<<"till index "<<ei<<" satisfy the requirement ";
    }

return 0;
}