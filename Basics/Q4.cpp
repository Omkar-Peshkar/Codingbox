//        Q4 wap to find the prime number from the given range?

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,i,j;
    bool flag=true;
    cout<<"Enter the range of number=";
    cin>>a>>b;

    for(i=a;i<=b;i++)
    { 
        flag=true;
        for(j=2;j<=int(sqrt(i));j++)
        {
          if(i%j==0)
          {
            flag=false;
            break;
          }
        }
        if(flag==true)
        {
            cout<<i<<" is prime number"<<endl;
        }
    }
    return 0;
}