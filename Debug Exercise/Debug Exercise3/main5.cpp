// Given an array of integers and a number x, find the total number of pairs whose sum is equal to x.
//  Problem kya keh rahi hai?

//  Tumhe:

// ek array diya hai

// ek number x diya hai

// Tumhe bas ye batana hai 
// Array me kitne aise pairs (2 numbers ka group) hain jinka sum = x ho.

//  “Pair” ka matlab

// Pair = do alag elements

// same element ko 2 baar use nahi kar sakte

// order matter nahi karta

// (2,3) aur (3,2) ek hi pair mana jaata hai

//  Example se samjho (Sabse easy)
// Input
// 5
// 1 2 3 4 5
// x = 5

// Step-by-step check

// 1 + 2 = 3 ❌

// 1 + 3 = 4 ❌

// 1 + 4 = 5 ✅ → pair mil gaya

// 1 + 5 = 6 ❌

// 2 + 3 = 5 ✅ → pair mil gaya

// 2 + 4 = 6 ❌

// 2 + 5 = 7 ❌

// 3 + 4 = 7 ❌

// 3 + 5 = 8 ❌

// Total pairs = 2



#include<iostream>
using namespace std;


int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<pairSumToX(arr,n,x);
    return 0;
}