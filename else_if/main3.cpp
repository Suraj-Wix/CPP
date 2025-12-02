#include<iostream>
using namespace std;

int main()
{
    // int budget;
    // cout<<"Enter your Budget:"<<endl;
    // cin>>budget;
    // if(budget>2000000)
    // {
    //     cout<<"You can buy a Scorpio"<<endl;
    // }
    // else{
    //     cout<<"You cannot buy a Scorpio"<<endl;
    // }

    // int age=18;
    // if(age>18)
    // {
    //     cout<<"You can vote"<<endl;
    // }
    // else{
    //     cout<<"You cannot vote"<<endl;
    // }

    int marks=55;
    if(marks>=90){
        cout<<"You got A+"<<endl;
    }
    else if(marks>=80){
        cout<<"You got A"<<endl;
    }
    else if(marks>=70){
        cout<<"You got B+"<<endl;
    }
    else if(marks>=60){
        cout<<"You got B"<<endl;
    }
    else if(marks>=50){
        cout<<"You got C"<<endl;
    }
    else{
        cout<<"You are Fail"<<endl;
    }

    return 0;
}