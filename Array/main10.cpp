// #include<iostream>
// #include<algorithm>
// using namespace std;
// void reverseArray(int arr[],int n){
//     int l=0,h=n-1;
//     while(l<h){
//         // swap(arr[l],arr[h]);
//         // l++;
//         // h--;
//         // short use 
//         swap(arr[l++],arr[h--]);
//     }
// }

// int main(){
//     int arr[8]={10,20,30,40,50,60,70,80};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     reverseArray(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;

//     }

//     return 0;
// }




#include<iostream>
#include<algorithm>
using namespace std;
void reverseArray(int arr[],int n){
    int l=0,h=n-1;
    while(l<h){
        // swap(arr[l],arr[h]);
        // l++;
        // h--;
        // short use 
        swap(arr[l++],arr[h--]);
    }
}

int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    // int n=sizeof(arr)/sizeof(arr[0]);
    int size=8;
    //M1.custom reversal using 2-pointer approach
    // reverseArray(arr,n);


    //M2. STL.C++ library
    reverse(arr,arr+size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;

    }

    return 0;
}