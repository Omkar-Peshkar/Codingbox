//        Q5 wap to make simple calculator?

#include<iostream>
#include<math.h>
using namespace std;
int  main()
{
    int n1,n2;
    cout<<"Enter the two numbers=";
    cin>>n1>>n2;
    char op;
    cout<<endl<<"Enter the opreator=";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
        break;

        case '-':
        cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
        break;

        case '*':
        cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
        break;

        case '/':
        if(n2==0)
        {
            cout<<"Invailed deno"<<endl;
            break;
        }
        cout<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
        break;

        case '%':
        if(n2==0)
        {
            cout<<"Invailed deno"<<endl;
            break;
        }
        cout<<n1<<"%"<<n2<<"="<<n1%n2<<endl;
        break;

        case '^':
        cout<<n1<<"^"<<n2<<"="<<pow(n1,n2)<<endl;
        break;

        default:
        cout<<"Invailed operator"<<endl;
        break;
    }
    return 0;
}