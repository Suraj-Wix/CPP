//  Question kya hai? (1 line)

//  Array me jitne bhi 0 hain unhe aage lao, aur 1 ko peeche bhejo.

// Bas 

// Sabse easy example
// Input
// 5
// 1 0 1 0 1

// Dimag me kya karo

// Array ko left se right dekho:

// 0 dikhe → use left side me bhej do

// 1 dikhe → kuch mat karo
//  Step-by-step

// Start:

// 1 0 1 0 1
// ^
// nextZero = 0


// Pehla 1 → ignore

// Doosra element 0 → aage bhejo

// 0 1 1 0 1
// nextZero = 1


// Next 0 mila → aage bhejo

// 0 0 1 1 1
// nextZero = 2

//  Final Output
// 0 0 1 1 1



#include<iostream>
using namespace std;



void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
            nextZero++;
		}
	}
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort0sand1s(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}