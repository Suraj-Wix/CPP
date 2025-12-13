#include<iostream>
using namespace std;

int main(){
    int n=10;
    if((n&1)==0){
        cout<<"Even number"<<endl;
    }
    else{
        cout<<"Odd number"<<endl;
    }
    return 0;
}