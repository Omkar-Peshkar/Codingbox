#include<iostream>
using namespace std;
void fabonacci(int num)
{
    int t1=0,t2=1,i,j;
    cout<<t1<<endl;
    cout<<t2<<endl;
    for(i=3;i<=num;i++)
    {
        j=t1+t2;
        cout<<j<<endl;
        t1=t2;
        t2=j;
    }
}
int main()
{
     int n;
     cout<<"Enter the n to find n number of numbers of fabonicci=";
     cin>>n;
     fabonacci(n);

     return 0;
}