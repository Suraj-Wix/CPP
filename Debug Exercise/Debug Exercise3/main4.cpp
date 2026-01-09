// Array ke alternate elements ko swap (exchange) karna hai.
//  Matlab kya hua?
// 1st element ↔ 2nd element
// 3rd element ↔ 4th element
// 5th element ↔ 6th element
// … aise hi aage
// Agar last element akela reh jaye (odd size array), to use as-it-is chhod dete hain.
// Example
// Input
// 5
// 1 2 3 4 5

// Working
// (1 2) (3 4) 5
// ↓
// 2 1 4 3 5

// Output
// 2 1 4 3 5

#include<iostream>
using namespace std;


void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
