#include<iostream>
using namespace std;

int calculatePower(int a ,int b){
    // a to the power b=>a*a*a---b times
    int ans=1;
    for(int i=1;i<=b;i++){
        ans= ans*a;
    }
    return ans;
}


int main(){
 int finalAns =  calculatePower(2,2);
 cout<<finalAns;
}

