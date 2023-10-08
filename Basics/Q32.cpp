//       Q32 wap for octal to decimal coversion (oct=base8 0-7)?

#include <iostream>
#include<math.h>
using namespace std;
void convertor(int num)
{
    int i,n,j=0,k,dec=0;
    while(num>0)
    {
      n=num%10;
      dec=dec+n*pow(8,j);
      j++;
      num=num/10;
    }
    cout<<"Decimal representation of octal"<<" ="<<dec;
}
int main()
{
    int n;
    cout<<"Enter the octal number=";
    cin>>n;
    convertor(n);
    return 0;
}