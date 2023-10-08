//        Q3 wap to check weather the given number is prime or not?

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    bool flag=true;
    cout<<"enter the number=";
    cin>>n;
    for(int i=2;i<=int(sqrt(n));i++)
    {
        if(n%i==0)
        {
        flag=false;
        }
    }
    if(flag==true)
    {
        cout<<n<<" is prime numeber";
    }
    else{
        cout<<n<<" is not prime numeber";
    }
    return 0;
}