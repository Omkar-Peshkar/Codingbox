//       Q27 wap to find ncr?
#include<iostream>
using namespace std;
int fact(int num)
{
    int f=1,i;
    for(i=1;i<=num;i++)
    {
     f*=i;
    }
    return f;
}
int main()
{
     int n,r,ncr;
     cout<<"Enter the n and r value=";
     cin>>n>>r;
     
     ncr=fact(n)/(fact(n-r)*fact(r));
     cout<<"NCR="<<ncr;

     return 0;
}