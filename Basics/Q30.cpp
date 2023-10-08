//       Q30 wap using funtion to check pythagorean triplet?
#include <iostream>
using namespace std;
bool triplet(int a, int b, int c)
{
    int x = max(a, max(b, c));
    int y, z;
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }

    if (x * x == y * y + z * z)
    {
        return true;
    }
         else
        {
            return false;
        }
}
int main()
{
    int a, b, c;
    cout << "Enter the values for pythagorean triplet=";
    cin >> a >> b >> c;
    if (triplet(a, b, c) == true)
    {
        cout << "it is a pythagorean triplet";
    }
    else
    {
        cout << "It is not a pythagorean triplet";
    }

    return 0;
}