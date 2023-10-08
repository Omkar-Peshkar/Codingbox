//       Q28 wap to print pascal triangle?   
#include<iostream>
using namespace std;
int fact(int num)
{
    int f=1;
    for(int i=1;i<=num;i++)
    {
        f*=i;
    }
    return f;
}
int ncr(int n,int r)
{
  int ncr;
  ncr=fact(n)/(fact(n-r)*fact(r));
  return ncr;
}
int main()
{
     int i,j,n;
     cout<<"Enter the number=";
     cin>>n;

     for(i=0;i<n;i++)
     {
        for(j=0;j<=i;j++)
        {
          cout<<ncr(i,j);
        }
        cout<<endl;
     }



     return 0;
}