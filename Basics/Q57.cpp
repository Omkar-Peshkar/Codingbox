#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cout<<str<<endl;

    string s1="fam",s2="ily";
    s1.append(s2);
    cout<<s1<<endl<<s2<<endl;
    string s3=s1+s2;
    cout<<s3<<endl;
    cout<<s1.compare(s2)<<endl;

    s3.clear();
    cout<<"S3="<<s3<<endl;
    if(s3.empty())
    {
        cout<<"String is empty"<<endl;
    }

    string str1(5,'n');
    cout<<str1<<endl;

    string s4="omkar atul peshkar";
    s4.erase(6,4);//(starting charecter ,till what to delete)
    cout<<s4<<endl;
    
    cout<<s4.find('a')<<endl;

    s4.insert(5," Atul");
    cout<<s4<<endl;

    cout<<s4.length()<<endl;    //same as size()

    string s5=s4.substr(6,13);
    cout<<s5<<endl;

    s5="890";
    int x=stoi(s5);
    cout<<++x<<endl;
  
    cout<<to_string(x)+"omkar"<<endl;    
    return 0;
}