#include <iostream>

using namespace std;

int main()
{
    int a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},i,b=0;
    for (i=0;i<3;i++)
    {
        b=a[i];
        a[i]=a[20-3+i];
        a[20-3+i]=b;
    }
    for (i=0;i<20;i++)
        cout<<a[i]<<' ';
    return 0;
}
