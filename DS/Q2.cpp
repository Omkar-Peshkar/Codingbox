//but answer is 7 
#include<iostream>
using namespace std;
int main()
{
    int horces=25,race=0,racer=0,topper=0;
    while(horces>=1)
    {
        race++;
        if(race==1)
        {
            horces=horces-5;
        }
        else{
            topper=3;
            horces=horces-2;
        }
     }
    cout<<"Minimum races to find top 3="<<race;
    return 0;
}

25=5*5 
top1 from each race 5th 
top2 from 