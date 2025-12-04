#include<iostream>
using namespace std;


int main()
{
     // Hollow square
    int side;
    cout<<"Enter length of side of square"<<endl;
    cin>>side;
    for(int i=0;i<side;i++){
        for(int j=0;j<side;j++){
            if(i==0||i==side-1||j==0||j==side-1||i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;

    }   
    return 0;
}