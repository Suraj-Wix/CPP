#include<iostream>
using namespace std;
// using namespace Ravinder; // header file banane ke badd kam kr karta hai  ish ko baad me dekh te hai

int letsParty(int a, int b)
{
    cout<<"Doing Party"<<endl;
    cout<<"Doing Party"<<endl;
    cout<<"Doing Party"<<endl;
    cout<<"Doing Party"<<endl;
    // a and b add kar deta hai
    int sum =a+b;
    return sum;
}


namespace Ravinder
{
    int letsParty(int a, int b)
    {
        cout<<"Ravinder Doing Party"<<endl;
        cout<<"Ravinder Doing Party"<<endl;
        cout<<"Ravinder Doing Party"<<endl;
        cout<<"Ravinder Doing Party"<<endl;
        // a and b add kr deta hai
        int sum=a+b;
        return sum;
    }
    void driving()
    {
        cout<<"Lakshay driving"<<endl;
    }
}

int main()
{
    int sum=letsParty(5,6);//calling the fn
    cout<<sum<<endl;

    cout<<"Let's call Ravinder Let's party"<<endl;

    int sum2=Ravinder::letsParty(4,5);
    cout<<sum2<<endl;
    return 0;
}