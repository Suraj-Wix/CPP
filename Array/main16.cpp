#include <iostream>
using namespace std;

void printALLPairs(int arr[], int n){

    for(int i = 0; i < n; i++){
        // j runs from start to current i
        for(int j = 0; j <= i; j++){
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }
}

int main(){

    int arr[] = {10, 20, 30, 40};
    int size = 4;

    printALLPairs(arr, size);

    return 0;
}
