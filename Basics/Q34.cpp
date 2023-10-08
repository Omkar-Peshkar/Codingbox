//       Q34 wap for decimal to octal conversion?
#include <iostream>
#include<math.h>
using namespace std;
void convertor(int num)
{
    int q, r, t,counter = 0;
    while (pow(8, counter) < num)
    {
        counter++;
    }
    while (num > 0)
    {
        t=pow(8,counter);
        q = num / t;
        r=num%t;
        cout << q;
    
        counter--;
        num = r;
    }
}
int main()
{
    int n;
    cout << "enter the decimal mumber=" ;
    cin >> n;
    convertor(n);
    return 0;
}