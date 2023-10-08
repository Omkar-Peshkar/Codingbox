    //    Q38 wap for a given array of nth element find the the highest from prefix of ith element?
#include <iostream>
using namespace std;
int main()
{
    int i, N, n = -1, maxno = -199999999;
    cout << "Enter the no i=of elements in the array=";
    cin >> N;
    int a[N];
    cout << "Enter the elements=";
    for (int j = 0; j < N; j++)
    {
        cin >> a[j];
    }
    cout << "Enter the ith elemnt for sub array=";
    cin >> i;
    maxno = a[0];
    for (int j = 0; j < N; j++)
    {
        if (a[j] == i)
        {
            n = j;
        }
    }
    if (n == -1)
    {
        cout << "Invalid input";
    }

    else
    {
        for (int j = 0; j <= n; j++)
        {
            maxno = max(maxno, a[j]);
        }
        cout << "maximum number from sub array=" << maxno;
    }
}
