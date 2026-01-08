#include<iostream>
using namespace std;

int main(){
    // declareing 2d array
    // int arr[4][3];

    // initialise 
    int arr[3][3]={
           {10,20,100},
           {30,40,200},
           {50,60,300},
    };
     // int arr[3][2]={10,20,30,40,50,60}; // aise bhi initilize kr skate hai

    //  int arr[3][2]={10,20};

    // cout<<arr[0][0]<<endl;

    // traverse the entire array 
    int rowSize=3;
    int colSize=3;

    // row-wise
    // for(int rowIndex=0;rowIndex<rowSize;rowIndex++){
    //     for(int colIndex=0;colIndex<colSize;colIndex++){
    //          cout<<arr[rowIndex][colIndex]<<" ";
    //     }
    //     cout<<endl;
    // }

    //column wise ye code square matrix ke liye
    // for(int r=0;r<rowSize;r++){
    //     for(int c=0;c<colSize;c++){
    //         cout<<"Printing"<<c<<", "<<r<<endl;
    //         cout<<arr[c][r]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //column wise
    // for(int col=0;col<colSize;col++){
    //     for(int row=0;row<rowSize;row++){
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }
     
    // // diagonal matrix-> square matrix
    // for(int r=0; r<rowSize;r++){
    //     for(int c=0;c<colSize;c++){
    //         if(r==c){
    //             cout<<arr[r][c]<< " ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
    // diagonla matrix -> square matrix ye single loop se ho jega
    for(int i=0;i<rowSize;i++){
        cout<<arr[i][i]<<" ";
    }

    return 0;

}