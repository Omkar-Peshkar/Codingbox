//        Q56 wap to demonstrate basics of pointer?
#include<iostream>
using namespace std;
void increment(int *demo)
{
    *demo=*demo+1;
}
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=20;
    cout<<a<<endl;

//array & pointer relation
    cout<<"Array & pointer relation="<<endl;
    int arr[]={1,2,3,4};
    cout<<*arr<<endl;
    int *ptr1=arr;
    for(int i=0;i<4;i++)
    {
        cout<<*ptr1<<endl;
        ptr1++;
    }
    for(int i=0;i<4;i++)
    {
        cout<<*(arr+i)<<endl;

    }

//Pointer to pointer
    cout<<"Pointer to pointer relation="<<endl;
    int **q;
    q=&ptr;
    cout<<*q<<endl; //prints value of ptr
    cout<<**q<<endl;//prints value of a

//pointer to function
    increment(ptr);
    cout<<a;
    return 0;
}