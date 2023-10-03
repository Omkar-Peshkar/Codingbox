#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    bool flag=true;
    cout<<"Enter the number of rows=";
    cin>>n;

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
         if(flag==true)
         {
            cout<<flag;
            flag=false;
         }
         else 
         {
          cout<<flag;
          flag=true;
         }
        }
        cout<<endl;
    }
    return 0;
}