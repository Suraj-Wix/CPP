#include<iostream>
using namespace std;

int main()
{
   int num;
   cout<<"Enter an integer: "<<endl;
   cin>>num;

   if(cin.fail())
   {
    cout<<"Failed"<<endl;
   }
   else{
    cout<<"Success"<<endl;
   }

    return 0;
}