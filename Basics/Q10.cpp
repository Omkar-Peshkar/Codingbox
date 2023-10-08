//       Q10 wap to print butterfly pattern?
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,h,n;
    cin>>n;

    for(i=1;i<=n*2;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=i;j++)
            {
              cout<<"*";
            }
            for(k=2*i;k<2*n;k++)
            {
                cout<<" ";
            }
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(j=i;j<=2*n;j++)
            {
                cout<<"*";
            }
            for(k=2*i;k>2*n+2;k--)
            {
                cout<<" ";
            }
            for(j=i;j<=2*n;j++)
            {
                cout<<"*";
            }

        }

        cout<<endl;
    }
    return 0;
}