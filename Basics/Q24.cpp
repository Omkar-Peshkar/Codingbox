#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int a)
{
    bool flag;
for(int i=2;i<=int(sqrt(a));i++)
{ 
     flag=true;
  if(a%i==0)
  {
    flag=false;
    break;
  }
}
return flag;

}
int main()
{
    int a,b,i; 
    cout<<"Enter the 2 numbers=";
    cin>>a>>b;

    for(i=a;i<=b;i++)
    {
        if(isprime(i)==true)
        {
            cout<<i<<endl;
        }
    }

     return 0;
}