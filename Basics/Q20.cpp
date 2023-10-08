//       Q20 wap to verify the given number is am=rmstrong number or not?

#include<iostream>
using namespace std;
int main()
{
    int n,org_num,sum=0,temp,counter;
    cout<<"Enter the number=";
    cin>>org_num;
    n=org_num;

    while(n>0)
    {
     temp=n%10;
     sum+=temp*temp*temp;
     n=n/10;

    }

    if(org_num==sum)
    {
        cout<<org_num<<" is armstrong number"<<endl;
    }
    else{
               cout<<org_num<<" is not a armstrong number"<<endl; 
    }

    return 0;
}