#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the value for n=";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if((i+j==n+1) || (j-i==3))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    
    for(i=n;i>0;i--)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if((i+j==n+1) || (j-i==3))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}