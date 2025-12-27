#include<iostream>
#include<algorithm>
using namespace std;

void printALLPairs(int arr[],int n){

    for(int i=0; i<n;i++){
        // for every i, we are runnig looping variable "j"form start to end
        for(int j=i; j<n-i;j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }

}

int main(){

  int arr[]={10,20,30,40};
  int size=4;

  printALLPairs(arr,size);
 


  return 0;
}
