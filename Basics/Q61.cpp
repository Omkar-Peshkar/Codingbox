//         Q61 wap to print the charecter which is occuring maximum times in an string?
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="ifwiufwhfwuiehbfufbefbwhilabaaaaaaa";
    char c;
    int counter=0,max=0;
    int arr[26];
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<s1.length();i++)
    {
        arr[s1[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            c='a'+i;
        }
    }

    cout<<"char="<<c<<" occured "<<max<<" times"<<endl;
    return 0;
}