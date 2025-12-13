#include<iostream>

using namespace std;

int main(){
    int age=15;
    int &demo=age;
    age++;
    cout<<demo;

    return 0;
}