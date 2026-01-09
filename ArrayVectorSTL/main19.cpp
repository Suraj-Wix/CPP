#include<iostream>
using namespace std;

void tarnsposeMatrix(int arr[][3],int rowSize,int colSize){
    // int ans[100][100]={0};
    
    for(int i=0; i<rowSize;i++){
        for(int j=i;j<colSize;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
//print the transposed matrix
cout<<"Transposed Matrix is: "<<endl;
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){

    int arr[3][3]={
                 {10,11,12},
                 {20,21,22},
                 {30,31,32}
    };

    int rowSize=3;
    int colSize=3;
    tarnsposeMatrix(arr,rowSize,colSize);
    
    return 0;
}