//       Q13 wap to print rombus?
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the number of rows=";
    cin>>n;

    for(i=n;i>0;i--)
    {
        for(k=1;k<i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}