#include <iostream>

using namespace std;

int main()
{
    int i,arr[5]={2,4,6,8,10},b,a;
//����� 1
//    for (i<0;i<5;i++)
//    {
//        b=arr[i]*2;
//        cout<<b<<endl;
//    }
//����� 2
//    cin>>a;
//    for (i<0;i<5;i++)
//    {
//
//        b=arr[i]-a;
//        cout<<b<<endl;
//    }
//����� 3
    for (i<0;i<5;i++)
   {

        b=arr[i]/arr[0];
        cout<<b<<endl;
   }
    return 0;
}
