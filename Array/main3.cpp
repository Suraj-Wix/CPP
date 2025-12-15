#include<iostream>
using namespace std;

int findMax(int arr[],int size){
     int maxAns=INT_MIN;
     for(int i=0; i<size;i++){
        // if(arr[i]>maxAns){  // me confusion hai to 
        //     maxAns=arr[i]; // ak aur function aata hai in build max function
        // }
         maxAns= max(maxAns,arr[i]);
     }
     return maxAns;
}

int main(){

    int arr[100];
    int size;
    cout<<"Enter the number of elements"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the input value of index: "<<i<<endl;
       cin>>arr[i]; 
    }
   cout<<"max number is: "<<findMax(arr,size)<<endl;
    
}