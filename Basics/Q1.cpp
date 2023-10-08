//        Q1 wap to find max of 3 number?
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the values for a b c=";
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is greatest of all"<<endl;
        }
        else
        {
             cout<<c<<" is greatest of all"<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<" is greatest of all"<<endl;
        }
        else
        {
             cout<<c<<" is greatest of all"<<endl;
        }
    }
return 0;
}