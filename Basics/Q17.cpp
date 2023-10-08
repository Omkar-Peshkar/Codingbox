//       Q17 wap to print zig-zag pattern?  

#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,n,counter;
    cout<<"Enter the number of stars=";
    cin>>n;
    counter=n;

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=n;j++)
        {
          if((i+j)%4==0 || (i==2 && j%4==0))
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