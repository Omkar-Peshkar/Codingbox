#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the no of elements in the array=";
    cin>>n;
    int a[n];
    cout<<"Enter the elemets=";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pcd,ccd,gcd,mc=0,c=1;
    for(i=n-1;i>0;i--)
    {
      if(i==n-1)
      {
        pcd=a[i]-a[i-1];
      }
      else 
      {
        ccd=a[i]-a[i-1];
        if(pcd==ccd)
        {
            c++;
        }
        if(c>mc)
        {
            gcd=ccd;
            mc=c;
        }
        if(ccd!=pcd)
        {
            c=1;
        }
        pcd=ccd;

      }
    }
    cout<<"Therefore arithmatic array of common difference "<<gcd<<" and sub array size="<<(mc+1);
}