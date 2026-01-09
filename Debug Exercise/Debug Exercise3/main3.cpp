// Program array ko 1 se N tak ke numbers se fill karta hai: pehle odd numbers ascending order me, phir even numbers descending order me.
// Example 1: n = 7
// Step 1: Numbers 1 se 7 tak
// 1 2 3 4 5 6 7

// Step 2: Pehle odd numbers (ascending)
// 1 3 5 7

// Step 3: Phir even numbers (descending)
// 6 4 2

// Final Array
// 1 3 5 7 6 4 2

//  Example 2: n = 6
// Step 1:
// 1 2 3 4 5 6

// Step 2: Odd numbers
// 1 3 5

// Step 3: Even numbers
// 6 4 2

//  Final Array
// 1 3 5 6 4 2

#include<iostream>
using namespace std;

void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    populate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}