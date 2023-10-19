#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[20];
    cin>>str;
    int i,k=0;
    for (i=0;i<strlen(str);i++)
    {
        if (str[i]=='a')
        {
            k++;
        }
    }
    cout<<(float)k*100/strlen(str)<<"%";
    return 0;
}
