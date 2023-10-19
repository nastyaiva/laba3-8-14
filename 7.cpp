#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int l1,l2,l3;
    char str1[]="hamburg";
    char str2[]="zhukovsky";
    char str3[]="woscow";
    l1=strlen(str1);
    l2=strlen(str2);
    l3=strlen(str3);
    if(l1>l2)
    {if(l1>l3) cout<<"the longest "<<str1<<endl;
    else cout<<"the longest "<<str3<<endl;}
    else
    {if(l2>l3)cout<<"the longest "<<str2<<endl;
    else cout<<"the longest "<<str3<<endl;};

    if(l1<l2)
    {if(l1<l3) cout<<"the shortest "<<str1<<endl;
    else cout<<"the shortest "<<str3<<endl;}
    else
    {if(l2<l3)cout<<"the shortest "<<str2<<endl;
    else cout<<"the shortest "<< str3<<endl;};
    return 0;
}
