#include<iostream>
using namespace std;

int main(){
    
    char grade;
    cout<<"enter your grade"<<endl;
    cin>>grade;

    // if(grade=='a'){
    //    cout<<"your marks will be in range of 90 to 100"<<endl;
    // }
    // else if(grade=='b'){
    //   cout<<"your marks will be in range of 80 to 90"<<endl;
    // }
    // else if(grade=='c'){
    //   cout<<"your marks will be in range of 70 to 80"<<endl;
    // }
    // else if(grade=='d'){
    //   cout<<"your marks will be in range of 60 to 70"<<endl;
    // }
    // else{
    //     cout<<"your marks will be in range of 0 to 60"<<endl;
    // }


    switch(grade){
        case 'a':cout<<"your marks will be in range of 90 to 100"<<endl;
        break;
        case 'b':cout<<"your marks will be in range of 80 to 90"<<endl;
        break;
        case 'c':cout<<"your marks will be in range of 70 to 80"<<endl;
        break;
        case 'd':cout<<"your marks will be in range of 60 to 70"<<endl;
        break;
        default: cout<<"your marks will be in range of 0 to 60"<<endl;
    }
    
    return 0;
}