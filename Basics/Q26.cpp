//       Q26 wap to find factorial using funtion?
#include<iostream>
using namespace std;
void fact(int num)
{
    int f=1,i;
    for(i=1;i<=num;i++)
    {
     f*=i;
    }
    cout<<"Factorial of "<<num<<" ="<<f<<endl;
}
int main()
{
     int n;
     cout<<"Enter the number=";
     cin>>n;
     fact(n);

     return 0;
}