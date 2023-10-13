        // Q53 wap to check the given string is palindrom or not?
#include<iostream>
using namespace std;
int main()
{
    int n;
    bool flag=false;
    cout<<"Enter the size of string array=";
    cin>>n;
    char arr[n+1];
    cout<<"Enter the char sting=";
    cin>>arr;
     for(int i=0;i<n;i++)
     {
        if(arr[i]==arr[n-1-i])
        {
          flag=true;
          continue;
   
        }
        else
        {
            break;
        }
     }
     if(flag==true)
     {
        cout<<arr<<" is palindrom arrey";
     }
     else
     {
        cout<<arr<<" is not palindrom array";
     }
}