#include <iostream>

using namespace std;

int main()
{
    int i, a[10]={1,2,3,4,5,6,7,8,9,10},s1=0,s2=0,s3=0,s4=0,k1,k2,s5=0,k5=0,s61,s62,s6=0,k6;
//пункт 1
//    for (i=0;i<10;i++)
//    {
//       s1+=a[i];
//       cout<<s1<<endl;
//    }
// пункт 2
//    for (i=0;i<10;i++)
//    {
//        s2+=a[i]*a[i];
//        cout<<s2<<endl;
//    }
// пункт 3
//    for (i=0;i<6;i++)
//    {
//        s3=s3+a[i];
//        cout<<s3<<endl;
//    }
// пункт 4
//    cin>>k1>>k2;
//    for (i=k1;i<k2+1;i++)
//    {
//        s4=s4+a[i];
//        cout<<s4<<endl;
//    }
// пункт 5
//    for (i=0;i<10;i++)
//    {
//       k5++;
//       s5+=a[i];
//       cout<<(float)s5/k5<<endl;
//    }
//пункт 6
    cin>>s61>>s62;
    for (i=s61;i<s62+1;i++)
    {
        k6++;
        s6+=a[i];
        cout<<(float)s6/k6<<endl;
    }

    return 0;


}
