//       Q15 wap to print palindrom pyramid?

#include<iostream>
using namespace std;
int main()
{
        int n,i,j,k;
    cout<<"Enter the number of rows=";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(k=n;k>i;k--)
        {
            cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        if(i>=2)
        {
            for(j=2;j<=i;j++)
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}