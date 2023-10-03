#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the value for n=";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j==1 || j==2*n || i==j || i+j==2*n+1)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }

        }
                    cout<<endl;
    }

        for(i=n;i>0;i--)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j==1 || j==2*n || i==j || i+j==2*n+1)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }

        }
                    cout<<endl;
    }

    return 0;
}