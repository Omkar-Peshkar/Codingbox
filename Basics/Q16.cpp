//       Q16 wap to print star pattern?

#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,n;
    cout<<"Enter the number=";
    cin>>n;

    for(i=1;i<=n;i++)
    { 
        for(k=n;k>i;k--)
        {
         cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

        for(i=n;i>0;i--)
    { 
        for(k=n;k>i;k--)
        {
         cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}