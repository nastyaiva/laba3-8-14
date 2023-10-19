#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[]="moscow";
    if (strlen(str)%2==0)
        cout<<strlen(str)<<" chetnoe";
    else
        cout<<strlen(str)<<" nechetnoe";
    return 0;
}
