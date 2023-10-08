      //  Q40 wap Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai
      //     . She wants to choose a contiguous arithmetic subarray from her array that has
      //       the maximum length. Please help her to determine the length of the longest
      //       contiguous arithmetic subarray.
      //     Input
      //          The first line of the input gives the number of test cases, T. T test cases follow.
      //          Each test case begins with a line containing the integer N. The second line
      //         contains N integers. The i-th integer is Ai

      //     Output
      //     For each test case, output one line containing Case #x: y, where x is the test case
      //     number (starting from 1) and y is the length of the longest contiguous arithmetic
      //     subarray.
          
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