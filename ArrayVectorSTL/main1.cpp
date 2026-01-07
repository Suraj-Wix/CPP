#include<iostream>

using namespace std;

void fun(int a[],int n){
    cout<<"Array elements are"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    // static memory allocation of array
    // int arr[5]={1,2,3,4,5};
    // fun(arr,5);

    // dynamic
    int n;
    cin>>n;
    int *arr=new int[n];// each elemet would be 0, or grabage

    // taking n element input and inserting in array
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr[i]=data;
    }  // ->0 index to 4 index;
    
    // let me try to insert more items;
    // arr[n]=80;
    //5->14 index;
    for(int i=0; i<10;i++){
        arr[n+i]=80;
    }

    fun(arr,n);


    return 0;
}

// ish uppar vala code 1 element to by chance daal liya tha 
// but n element nhi daal sakta hai 
// but app n size ka array declare kiya to n hi size ke element daal sakte hai
// ye problem aati hai normal  error dector me 
// exit status -1 data cruss ho gye toh ishka solution kya hai

// ish ka solutin hai ki c++ valo he ye khud ka stander template libarya bna diye hai
// voh dyamic size ki array hogi

// in vector , dont tell size of vector.
// just keep inserting, i will manage the allocations.

// mujhe koi solution provide kre 

// na to user se puchna hai
// just keep inserting the data,

// is wor ko karne ke liye vector data structure hota hai