#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,sr,sc,er,ec;
    cout<<"Enter the no of rows in a matrix=";
    cin>>r;
    cout<<"enter the no of columns in a matrix=";
    cin>>c;
    int a[r][c];
    cout<<"Enter the elements of the matrix="<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<" here is the Matrix ="<<endl;
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    sr=0;
    er=r-1;
    sc=0;
    ec=c-1;
    while(sr<=er && sc<=ec)
    {
        for(i=sr;i<=ec;j++)
        {
            cout<<a[sr][j]<<" ";
            sr++;
        }
        cout<<endl;
        for(i=sr;i<=er;i++)
        {
            cout<<a[ec][i]<<" ";
        }
                cout<<endl;
        for(j=ec;j>=sc;j--)
        {
            cout<<a[er][j]<<" ";
            er--;
        }
                cout<<endl;
        for(i=er;i<=sr;i++)
        {
            cout<<a[sc][i]<<" ";
            sc++;
        }
                cout<<endl;

    }



}