#include<iostream>
using namespace std;

int main(){
    int age =2;
    
    if(age>=18){
        cout<<"you can vote"<<endl;

    }
    else if(age>=15)
    {
        //yaha tak aagaya ha koi , toh age kitni hogi
        // age>=15&&age<18;
        cout<<"tum chote ho"<<endl;
    }
    else if(age>=10){
        cout<<"abhi bhi chotte ho"<<endl;
    }
    else if(age>=5)
    {
        cout<<"paida toh ho jata bhai"<<endl;
    }
    else{
        cout<<"baby ho tum"<<endl;
    }



    // if(age>18){
    //     cout<<"You can vote"<<endl;
    // }
    // else{
    //     cout<<"You cannot vote"<<endl;
    // }
    
    return 0;
}
