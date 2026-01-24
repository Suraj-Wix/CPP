#include<iostream>

using namespace std;

int main()
{
    int height;
    cout<<"Enter height in feet"<<endl;
    cin>>height;

    int weight;
    cout<<"Enter your"<<endl;
    cin>>weight;

    if(height>5){
        if(weight>70){
           cout<<"you got a good BMI"<<endl;
        
        }
        else{
            cout<<"bhai tujhse na hopaega"<<endl;
        }
    }
    else{
        cout<<"Complan dila du"<<endl;
    }

    return 0;
    
}
