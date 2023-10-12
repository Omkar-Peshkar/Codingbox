// Q51 wap to find multiplication of matrix n1*n2 with n2*n3?

#include<iostream>
using namespace std;
int main()
{
    int k,i,j,n1,n2,n3;
    cout<<"Enter the no of rows for matrix 1st=";
    cin>>n1;
    cout<<"enter the no of columns for matrix 1st=";
    cin>>n2;
    int a[n1][n2];
    cout<<"Enter the elements of the matrix="<<endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the no of columns for matrix 2nd =";
    cin>>n3;
    int b[n2][n3];
    cout<<"Enter the elements=";
        for(i=0;i<n2;i++)
    {
        for(j=0;j<n3;j++)
        {
            cin>>b[i][j];
        }
    }
    int c[n1][n3];
    for(i=0;i<n1;i++)
    { 
        for(j=0;j<n3;j++)
        {
            int sum=0;
            for(k=0;k<n2;k++)
            {
              sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }

    cout<<"Multiplication of 2 matrix=";
    cout<<endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}