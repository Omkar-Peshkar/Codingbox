#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
string binnaryconvertor(int n)
{
   int i,j=1,q,r;
   string a,no;
   while(n>0)
   {
     q=n/2;
     r=n%2;
     n=q;
     a+=to_string(r);
     j++;
   }
   for(int k=j;k<=8;k++)
   {
        a+=to_string(0);
   }
   reverse(a.begin(),a.end());
   return a;
}
int addition(string n1,string n2)
{
    bool carry=false;
    int sum,arr[100],c=0,counter=1;
    int l1=n1.back()-'0',l2=n2.back()-'0';
    while(counter<=8)
    {
        if((l1==0 && l2==1 && carry==true) || (l1==1 &&l2==0 && carry==true))
        {
            arr[c]=0;
            carry=true;
        }
       else if((l1==0 && l2==1) || (l1==1 &&l2==0))
        {
            arr[c]=1;
        }

        else if((l1==1 && l2==1 && carry==true) || (l1==1 &&l2==1 && carry==true))
        {
            arr[c]=1;
            carry=true;
        }
        else if((l1==1 && l2==1) || (l1==1 &&l2==1))
        {
            arr[c]=0;
            carry=true;
        }
        else if((l1==0 && l2==0 && carry==true) || (l1==0 &&l2==0 && carry==true))
        {
            arr[c]=1;
            carry=false;
        }
        else if((l1==0 && l2==0) || (l1==0 &&l2==0))
        {
            arr[c]=0;
        }
        else{

        }
        c++;
        counter++;
       n1=n1.substr(0,n1.length()-1);
       n2=n2.substr(0,n2.length()-1);
       l1=n1.back()-'0';
       l2=n2.back()-'0';
     
    }
    if(carry==true)
    {
        arr[c]=1;
        carry=false;
    }
    else
    {
        arr[c]=0;
    }
    for(int j=8;j>=0;j--)
    {
        cout<<arr[j];
    }
}
int main()
{
    int n1,n2;
    cout<<"Enter the 2 decimal number=";
    cin>>n1>>n2;
//    addition(n1,n2);
    cout<<binnaryconvertor(n1)<<endl;
  cout<<binnaryconvertor(n2)<<endl;
    addition(binnaryconvertor(n1),binnaryconvertor(n2));

}