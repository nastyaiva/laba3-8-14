#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[]="ivanova";
    char str2[]="petrov";
    if (strlen(str1)>strlen(str2))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}
