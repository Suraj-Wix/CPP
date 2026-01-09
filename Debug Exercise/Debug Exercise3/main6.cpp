//  Problem kya hai? (Simple words)

//  Tumhe:

// ek array diya hai

// ek number x diya hai

// Tumhe ye batana hai 
// Array me kitne aise 3 numbers (triplet) hain jinka sum = x ho.

//  “Triplet” ka matlab

// Triplet = 3 alag-alag elements ka group

// Same element ko repeat nahi kar sakte

// Order matter nahi karta

// (1,2,3) aur (3,2,1) ek hi triplet mana jaata hai

// Easy Example
// Input
// 5
// 1 2 3 4 5
// x = 6

// Step-by-step checking (bilkul basic)

// Array:

// 1 2 3 4 5


// Possible triplets check karte hain:

// 1 + 2 + 3 = 6 ✅

// 1 + 2 + 4 = 7 ❌

// 1 + 2 + 5 = 8 ❌

// 1 + 3 + 4 = 8 ❌

// 2 + 3 + 4 = 9 ❌

// Sirf 1 triplet mila

//  Output
// 1

#include<iostream>
using namespace std;

int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=j+1; k<size; k++){
				if(input[i] + input[j] + input[k] == x) triplets++;
			}
		}
	}
	return triplets;
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
    cout<<tripletSumToX(arr,n,x);
    return 0;
}
