//         Q60 wap to form the biggest number from the numeric string?
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1;
    int temp;
    cout<<"Enter the numeric string=";
    cin>>s1;
 
    for(int i=0;i<s1.length();i++)
    {
     for(int j=i+1;j<s1.length();j++)
     {
        if(s1[i]<s1[j])
        {
         temp=s1[i];
         s1[i]=s1[j];
         s1[j]=temp;
        }
     }
    }

    //orr
    // sort(s1.begin(),s1.end(),greater<int>());
    cout<<s1;
}