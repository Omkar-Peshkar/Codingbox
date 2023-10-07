#include<iostream>
using namespace std;
int main()
{
     int i=0,j=1,n,k,l;
     cout<<"Enter the number of element for fabbonici series you want=";
     cin>>n;

     cout<<"here is your fabonicci series="<<endl;
     cout<<i<<endl;
     cout<<j<<endl;

     for(k=3;k<=n;k++)
     {
      l=i+j;
      cout<<l<<endl;
      i=j;
      j=l;
      
     }

     return 0;
}