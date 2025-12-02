#include<iostream>
using namespace std;

int letsParty(int a, int b)
{
    cout<<"Doing Party"<<endl;
    cout<<"Doing Party "<<endl;
    cout<<"Doing Party"<<endl;
    cout<<"Doing Party"<<endl;
    // a and b add kar deta hai
    int sum= a+b;
    return sum;

}

 void letsParty()
    {
        cout<<"my party"<<endl;
    }

void driving()
{
    cout<<"Doing driving"<<endl;
}
namespace lakshay // ye khud ka namespace hai
{   
    int a=5;
    void letsParty()
    {
        cout<<"my party"<<endl;
    }
    void driving()
    {
        cout<<"m driving"<<endl;
    }
}

int main()
{   
   int sum= letsParty(5,6);// calling the function
   cout<<sum<<endl;
    letsParty();
    driving();
    lakshay::letsParty();
    lakshay::driving();
    lakshay::a=5;
    return 0;



}