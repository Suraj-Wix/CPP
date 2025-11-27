#include<iostream>
#include<cmath>
using namespace std;

// int decimalToBinaryMethod1(int n)
// {
//     // Division Method.
//     int binaryno =0;
//     int i=0;
//     while(n>0)
//     {
//        int bit = n%2;
//        binaryno=bit*pow(10 ,i++)+binaryno;
//        cout<<bit<<endl;
//        n=n/2;
//     }
//     return binaryno;
//     // return 0;

// }

// int main()
// {
//     int n;
//     cin>>n;
//     int binary =decimalToBinaryMethod1(n);
//     cout<<binary<<endl;

// }



int decimalToBinaryMethod2(int n)
{
    // bitwise rightshift
    int binaryno =0;
    int i=0;
    while(n>0)
    {
       int bit = (n & 1);
       binaryno=bit*pow(10 ,i++)+binaryno;
       cout<<bit<<endl;
       n=n>>1;
    }
    return binaryno;
    // return 0;

}

int main()
{
    int n;
    cin>>n;
    int binary =decimalToBinaryMethod2(n);
    cout<<binary<<endl;

}