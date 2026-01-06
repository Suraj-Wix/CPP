#include <iostream>
using namespace std;

void reversePrint(int arr[],int size){
    for(int target=size-1;target>=0;target--){
        //liner search
        for(int i=0;i<size;i++){
            if(i==target){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    reversePrint(arr,size);
    return 0;
}