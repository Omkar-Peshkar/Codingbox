#include<iostream>
using namespace std;
int sum(int num)
{
    int s=(num*(num+1))/2;
    return s;
}
int main()
{
    int n;
     cout<<"Enter the number till which the sum is to be printed=";
     cin>>n;
     cout<<"sum="<<sum(n);


     return 0;
}