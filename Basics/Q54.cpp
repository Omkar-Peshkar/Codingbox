//        Q54 wap to print the biggest word from the sentence?
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of string array: ";
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cout << "Enter the string: ";
    cin.getline(arr, n+1);

    int sum = 0, max = 0, i = 0,sp=0,maxsp=0,tp=-1;
    while (arr[i] != '\0')
    {
        if (arr[i] == ' ')
        {
  
            if (sum > max)
            {
                maxsp=sp;
                max = sum;

            }
            sum = 0;
            sp=i+1;
        }
        else
        {
            sum++;
        }
        i++;
    }
    if (sum > max)
    {
        max = sum;
        maxsp=sp;
    }
    for(i=maxsp;i<=(maxsp+max);i++)
   {
    cout<<arr[i];
    }
    cout<<endl;

    cout << "Biggest word contains " << max << " characters." << endl;

    return 0;
}
