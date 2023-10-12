// Q52 wap to do 2D matrix search in such a way that the elemnts of rows and column are sorted?

#include <iostream>
using namespace std;
int main()
{
    int k, i, j, r=4, c=4;
    //  int a[r][c]={{1,24,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    bool flag = false;
    cout << "Enter the no of rows for matrix 1st=";
    cin >> r;
    cout << "enter the no of columns for matrix 1st=";
    cin >> c;
    int a[r][c];
    cout << "Enter the elements of the matrix=" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the element to be searched=";
    cin >> k;
    int tr=0,tc=c-1;
    while(tr<r && tc>=0)
    {
        if(k<a[tr][tc])
        {
            tc--;
        }
        else if(k>a[tr][tc])
        {
            tr++;
        }
        else{
            flag=true;
            break;
        }
    }
    if (flag == true)
    {
        cout << k << " found ";
    }
    else
    {
        cout << k << "not found";
    }
}