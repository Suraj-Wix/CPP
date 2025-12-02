#include<iostream>
using namespace std;

int main()
{

    char grade;
    cout<<"Enter your grade:"<<endl;
    cin>>grade;
    switch(grade){
        case'A': cout<<"You got 90%"<<endl;
        break;
        case'B': cout<<"You got 80%"<<endl;
        break;
        case'C': cout<<"You got 70%"<<endl;
        break;
        default: cout<<"Bhai tu toh fail hogya"<<endl;
            
    }


}