//       Q31 wap for decimal to binary conversion?

#include<iostream>
#include<math.h>
using namespace std; 
void convertor(int num)
{
    int n=num,q,r,i;
    int a[num];
  for(i=0;i<=num;i++)
  {
   q=int(n/2);
   r=n%2;
   a[i]=r;
   n=q;
  }
  cout<<"Binnary representation=";
  for(i=num-1;i>=0;i--)
  {
    cout<<a[i];
  }
}
int main()
{
    int d;
    cout<<"Enter the decimal number=";
    cin>>d;
    convertor(d);
     return 0;
}