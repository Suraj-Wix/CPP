#include<iostream>
using namespace std;

int main (){
     
     //int budget;
     //cout<< "Enter your Budget: " << endl;

     //input
    //  cin >> budget;

    //  if(budget > 2000000){
    //     cout << "you can buy Scorpio " <<endl;
    //  }
    //  else{
    //     cout << "You cannot buy scorpio" << endl;
    //  }
    //  int age =100;
    //  if(age > 18){
    //     cout <<"your can vote"<< endl;
    //  }
    // else {
    //     cout << "you cannot vote"<<endl;
    // }
     
     
    //  int marks =95;
    //  if(marks>90){
    //     cout <<"A";
    //  }
    //  else if(marks >80){
    //     cout<<"B";
    //  }
    //  else if(marks >70){
    //     cout<<"C";
    //  }
    //  else if(marks>60){
    //     cout <<"d";
    //  }
    //  else{
    //     cout<<"you Failed";
    //  }


//nested ifs:
    int height;
    cout<<"Enter height in feet"<<endl;
    cin>>height;
    
    int weight; 
    cout<<"Enter your Weight: " << endl;
    cin>>weight;

    if(height >5){
        if(weight>70){
            cout<<"you got a good BMI"<<endl;

        }
        else{
            cout<<"bhai tujhse na hopaega";
        }
    }
    else {
        cout<<"Complan dila du"<<endl;
    }


    return 0;
}