#include<iostream>
using namespace std;
void printDiagonlSum(int arr[][4],int rowSize,int colSize){
    int sum=0;
    for(int i=0;i<rowSize;i++){
        sum=sum+arr[i][i];
    }
    cout<<"sum: "<<sum<<endl;
}

int main(){

    int arr[3][4]={
                 {10,10,10},
                 {20,20,20},
                 {30,30,30}
    };

    int rowSize=3;
    int colSize=4;
    printDiagonlSum(arr,rowSize,colSize);
    return 0;
}