#include<iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
  
      for(int i=2;i<=n;i++){
        bool isPime=checkPrime(i);
        if(isPime){
            cout<<i<<" ";
        }
      }






    // bool isPrime=checkPrime(n);
    // if(isPrime){
    //     cout<<"Prime\n";

    // }
    // else{
    //     cout<<"Not a Prime\n";
    // }
}