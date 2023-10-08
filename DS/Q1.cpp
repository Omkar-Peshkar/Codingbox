    //    Q1 wap if you have 15rs and and you can buy 1 choocolate for 1 rs and if you give 3 wrappers then   
    //        will get 1 rs? then find how many maximum chocolate you will get?
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