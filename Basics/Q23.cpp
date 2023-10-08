//       Q23 wap to reverse the given number?

#include<iostream>
using namespace std;
int main()
{
     int num,rev=0,n,temp,i,j,k;
     cout<<"enter the number=";
     cin>>num;

     n=num;

     while(n>0)
     {
      temp=n%10;
      rev=temp+rev*10;
      n=n/10;
     }

    cout<<"your reverse="<<rev;
     return 0;
}