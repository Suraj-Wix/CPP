// “Given an integer n and n numbers, un sab numbers ka sum nikalna hai.”
//  Program kya karta hai?

//  User se n numbers leta hai aur un sab ka sum (jod) nikalta hai.

// Easy Example
// Input
// 5
// 1 2 3 4 5

// Step-by-step (jaise dimag me calculation)

// n = 5
// Matlab 5 numbers aane wale hain

// Numbers liye:

// 1 2 3 4 5


// Sum calculate hota hai:

// start: sum = 0
// sum = 0 + 1 = 1
// sum = 1 + 2 = 3
// sum = 3 + 3 = 6
// sum = 6 + 4 = 10
// sum = 10 + 5 = 15

// Output
// 15

#include<iostream>
using namespace std;

int main(){
    // sum of n numbers
    int n,sum=0;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
}