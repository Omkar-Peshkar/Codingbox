#include<iostream>
#include<math.h>
using namespace std;
void convertor(int num)
{
    int power=0,i,q,r;
    while(pow(16,power)<num)
    {
     power++;
    }
    while(num>0)
    {
        i=pow(16,power);
        q=num/i;
        cout<<q;
        r=num%i;
        power--;
        num=r;
    }
}
int main()
{
    int n;
    cout<<"Enter the decimal number=";
    cin>>n;
    convertor(n);
}