//        Q6 wap to check weather the given number is vowel or consonent?
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the charecter to be checked=";
    cin>>c;

    switch(c)
    {
        case 'a':
        case 'A':
        cout<<c<<" is vowel"<<endl;
        break;

        case 'e':
        case 'E':
        cout<<c<<" is vowel"<<endl;
        break;

        case 'i':
        case 'I':
        cout<<c<<" is vowel"<<endl;
        break;

        case 'o':
        case 'O':
        cout<<c<<" is vowel"<<endl;
        break;

        case 'u':
        case 'U':
        cout<<c<<" is vowel"<<endl;
        break;

        default:
        cout<<c<<" is a cansonent";
        break;
    }

    return 0;
}