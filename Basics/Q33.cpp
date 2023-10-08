//       Q33 wap for hexadecimal to decimal conversion?
#include<iostream>
#include<math.h>
using namespace std;
void conversion(string num)
{
    
    int n=0,dec=0,i=0;
    char t=num.back();
    while(int(t)>0)
    {
        t=tolower(t);
        switch(t)
        {
            case 'a':
                n=10;
            break;
            case 'b':
                n=11;
            break;
            case 'c':
                n=12;
            break;
            case 'd':
                n=13;
            break;
            case 'e':
                n=14;
            break;
            case 'f':
                n=15;
            break;
            default:
              n=t-'0';
              break;
        }
        dec=dec+n*pow(16,i);
        i++;
        num=num.substr(0,((num.length())-1)); 
        t=(num.back());
      
    }
    cout<<"decimal representation of hexa="<<dec;
}
int main()
{
    string n;
    cout<<"Enter the hexa value=";
    cin>>n;
    conversion(n);
}
