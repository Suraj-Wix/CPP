#include<iostream>
using namespace std;

float KMtoMiles(float km){
    float _1kmMiles=0.621371;
    float miles= km * _1kmMiles;
    return miles;
}

int main(){
    float km;
    cout<<"Tell me Km"<<endl;
    cin>>km;
    float miles=KMtoMiles(km);
    cout<<"Miles="<<miles<<endl;
    return 0;
}