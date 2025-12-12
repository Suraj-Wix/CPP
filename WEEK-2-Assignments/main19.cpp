#include<iostream>
using namespace std;

int createNumberUsingDigits(int numberOfDigits){
    int num=0;
    for( int i=0;i<numberOfDigits;i++){
         cout<<"Enter Digits: "<<endl;
         int digits;
         cin>>digits;
         num=num*10+digits;
         cout<<"Number Created so far: "<<num<<endl;
    }
    return num;
}

int main(){
    int numbersOfDigits;
    cin>>numbersOfDigits;
    int num=createNumberUsingDigits(numbersOfDigits);
    cout<<"number created by digits: "<<num<<endl;
}