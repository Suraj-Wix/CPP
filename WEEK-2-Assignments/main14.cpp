// #include<iostream>
// using namespace std;

// bool checkEven(int n){
//     if(n%2==0){
//         return true;// its an even number
//     }
//     else{
//         return false;// its an odd number
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     bool isEven(n);

//     if(isEven){
//         cout<<n<<"is Even number.\n";
//     }
//     else{
//         cout<<n<<"is Odd number.\n";
//     }

// }




#include<iostream>
using namespace std;

bool checkEven(int n){
    if(/*n%2==0*/(n&1)==0){
        return true;// its an even number
    }
    else{
        return false;// its an odd number
    }
}

int main(){
    int n;
    cin>>n;
    bool isEven(n);

    if(isEven){
        cout<<n<<"is Even number.\n";
    }
    else{
        cout<<n<<"is Odd number.\n";
    }

}