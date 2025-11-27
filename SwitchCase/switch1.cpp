#include<iostream>

using namespace std;

int main()
{
    char grade;
    cout<<"Enter your grade"<<endl;
    cin>>grade;
   

    // if(grade == 'A'){
    //    cout<<"Your marks will be a rage of 90 to 100"<<endl;
    // }
    // else if(grade == 'B'){
    //    cout<<"Your marks will be a rage of 80 to 90"<<endl;
    // }
    // else if(grade == 'C'){
    //    cout<<"Your marks will be a rage of 70 to 80"<<endl;
    // }
    // else if(grade == 'D'){
    //    cout<<"Your marks will be a rage of 60 to 70"<<endl;
    // }
    // else{
    //    cout<<"Your marks will be a rage of 0 to 60"<<endl;
    // }

    switch(grade){
        case 'A':
            cout<<"Your marks will be a rage of 90 to 100"<<endl;
            break;
        case 'B':
            cout<<"Your marks will be a rage of 80 to 90"<<endl;
            break;
        case 'C':
            cout<<"Your marks will be a rage of 70 to 80"<<endl;
            break;
        case 'D':
            cout<<"Your marks will be a rage of 60 to 70"<<endl;
            break;
        default:
            cout<<"Your marks will be a rage of 0 to 60"<<endl;
    }

  return 0;
}