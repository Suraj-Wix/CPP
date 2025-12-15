// #include<iostream>
// using namespace std;

// bool findTaget(int arr[],int size, int target){
//     // traverse the entire array
//     for(int i=0;i<size;i++){
//         int currentElement=arr[i];
//         if(currentElement==target){
//             //found 
//             return true;
//         }
//     }
//     // agar app yaha tk pahuch gye toh
//     //iska matlb poora loop chal chuka hai
//     //iska matlab poore loop me kahi bhi target nhi mila
//     //iska matlb lement not found
//     //iska matlab return false;

    

//     return false;
// }

// int main(){

//     int arr[]={10,20,30,40,50};
//     int size=5;
//     int target=50;
//     bool ans=findTaget(arr,size,target);
//     cout<<"ans: "<<ans<<endl;
// }






#include<iostream>
using namespace std;

bool findTaget(int arr[],int size, int target){
    // traverse the entire array
    for(int i=0;i<size;i++){
        int currentElement=arr[i];// ish me aise hi rakha samjhane ke liye arr[i]==target bhi rakhoge tho chal jayega
        if(currentElement==target){
            //found 
            return true;
        }
    }
    // agar app yaha tk pahuch gye toh
    //iska matlb poora loop chal chuka hai
    //iska matlab poore loop me kahi bhi target nhi mila
    //iska matlb lement not found
    //iska matlab return false;

    

    return false;
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

    int target;
    cout<<"Enter the value of target"<<endl;
    cin>>target;
    cout<<"ans"<<target;
}