#include<iostream>
using namespace std;

void printColSum(int arr[][4],int rowSize, int colSize){

     for(int j=0;j<colSize;j++){
        int sum=0;
        // hr row k liye sum starting me 0 hai
        for(int i=0; i<rowSize;i++){
            sum=sum+arr[i][j];
        }
        // jab saare column k element add krliye hai
        // toh fer print krdo
        cout<<sum<<endl;
     }
}

int main(){

    int arr[3][4]={
        {10,10,10,10},
        {20,20,20,20},
        {30,30,30,30}
    };

    int rowSize=3;
    int colSize=4;

    printColSum(arr,rowSize,colSize);



}