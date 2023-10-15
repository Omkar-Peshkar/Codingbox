//        Q55 wap to print the word having highest no og vowels from the sentence?
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbe of charecters you wnat in array=";
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cout<<"Enter the string=";
    cin.getline(arr,n+1);
    cin.ignore();
    int maxv=0,sumv=0,sp=0,i=0,maxsp=-1,sumw=0,maxw=0;
    while(arr[i]!='\0')
    {
    if(arr[i]==' ')
      {
        if(sumv>maxv)
        {
            maxsp=sp;
            maxv=sumv;
            maxw=sumw;
        }
        sumv=0;
        sumw=0;
        sp=i+1;
      }
      else{
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
        {
            sumv++;
        }
        sumw++;
      }
      i++;
    }
    if(sumv>maxv)
        {
            maxsp=sp;
            maxv=sumv;
            maxw=sumw;
        }

   cout<<"the word having highesno of vowels is "<<maxv<<" and word=";
    for(i=maxsp;i<=(maxsp+maxw);i++)
    {
        cout<<arr[i];
    }


}