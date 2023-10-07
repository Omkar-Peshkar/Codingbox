#include<iostream>
using namespace std;
int main()
{
    int money=15,wrapper=0,chocolate=0;
    while(money>0)
    {
        chocolate++;
        money--;
        wrapper++;
        if(wrapper==3)
        {
            wrapper=0;
            money++;
        }
    }

    cout<<chocolate;
    return 0;
}