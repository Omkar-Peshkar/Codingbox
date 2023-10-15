//        Q59 wap to use some advance funtions of string?
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{   
    string str="jhbfwbf--jbeib ,erfr.biewue",result;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
      str[i]-=32; 
    }

    //orr
    cout<<str<<endl; 
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl; 

    return 0;
}