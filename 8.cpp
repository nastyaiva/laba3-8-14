#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i;
    char str[20];
    cin>>str;
    for (i=0;i<strlen(str);i++)
    {
        cout<<"*";
    }
    cout<<str;
    for (i=0;i<strlen(str);i++)
    {
        cout<<"*";
    }
cout<<endl;

    return 0;
}
