#include <iostream>

using namespace std;
int main()
{
    int mass[10]={1,2,4,-5,6,-7,5,8,9,5},i,j,sum=0;
//пункт 1
//    for ( i = 0; i < 10; i++) {
//        if (mass[i] < 0)
//{
//    for ( j = i + 1; j < 10; j++)
//        mass[j - 1] = mass[j];
//    break;
//}
//        }
//
//        for ( i = 0; i < 9; i++)
//        {
//            cout << mass[i] << " " << endl;
//        }
// пункт 2
    for ( i =9; i >= 0; i--) {
        if (mass[i]%2== 0)
{
    for ( j = i+1; j <10; j++)
        mass[j - 1] = mass[j];
    break;
}
        }

        for ( i = 0; i < 9; i++)
        {
            cout << mass[i] << " " << endl;
        }

    return 0;
}
