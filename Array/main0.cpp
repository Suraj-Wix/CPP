#include<iostream>
using namespace std;

int main(){
    // // creation
    // int arr[10];// decelare
    // //erro
    // // int brr[];
    // int crr[]={10,20,40,70}; // inilitize
    // int drr[4]={0};
    // // cout<<drr[0]<<endl;
    // cout<<crr[0]<<endl;
    // cout<<crr[2];


    // fill

    // int arr[4];
    // fill(arr,arr+4,23);
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;


    // input in array

    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the value for box index: "<<i<<endl;
        cin>>arr[i];
    }

    // aise print bhi kr sakte hai
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}