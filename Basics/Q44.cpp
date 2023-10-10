// Find the smallest positive missing number in the given array.
// Example: [0, -10, 1, 3, -20], Ans = 2

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum,S,si=-1,ei=-1;
    cout<<"Enter the no of elements in the array=";
    cin>>n;
    int a[n];
    int N=1e6+2;
    bool b[N];
    cout<<"Enter the elemets=";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=false;
    }
    for(i=0;i<N;i++)
    {
        b[i]=false;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            b[a[i]]=true;
        }
    }
    for(i=1;i<n;i++)
    {
        if(b[i]==false)
        {
         cout<<i<<" is the samllest positive number missiong in the given array";
         break;
        }
    }

return 0;
}




//  for(i=0;i<n;i++)
//  { 
//      flag=false;
//     for(j=0;j<n;j++)
//     {
//         if(a[j]==c)
//         {
//           flag=true;
//         }
//     }
//     if(flag==false)
//     {
//         cout<<c<<" is the samllest positive number missiong in the given array";
//     }
//     c++;
//  }