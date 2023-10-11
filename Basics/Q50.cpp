        // Q50 wap Problem Given a square matrix A & its number of rows (or columns) N, return the
        //     transpose of A.
        //     The transpose of a matrix is the matrix flipped over it's main diagonal,
        //     switching the row and column indices of the matrix.

        #include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"Enter the no oforder  in a matrix=";
    cin>>n;
    int a[n][n];
    cout<<"Enter the elements of the matrix="<<endl;
    for(i=0;i<n ;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;


    

        for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
 cout<<" here is the updated Matrix ="<<endl;
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}