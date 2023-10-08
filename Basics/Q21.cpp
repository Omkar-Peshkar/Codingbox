//       Q21 wap to find the factorial of number?

#include<iostream>
using namespace std;
int main()
{
     int fact=1,n,temp;
     cout<<"Enter the number=";
     cin>>n;

     for(int i=n;i>0;i--)
     {
        fact*=i;
     }
     cout<<"factorial of "<<n<<" ="<<fact;

     return 0;
}