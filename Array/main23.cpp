#include<iostream>
#include<algorithm>
using namespace std;

void rotateArray(int arr[],int size,int shift){
    int finalShift=shift%size;
    if(finalShift==0){
        // no need to do anything
        return;
    }
    //step1: copy last finalshift elements inot a temp array
    int temp[10000];
    int index=0;
    for(int i=size-finalShift;i<size;i++){
        temp[index]=arr[i];
        index++;
    }

    //step2: shift array element by finalShift places
    for(int i=size-1;i>=0;i--){
        if(i-finalShift>=0){
        arr[i]=arr[i-finalShift];
      }
    }
    // step3: copy temp elements into original array
    for(int i=0;i<finalShift;i++){
        arr[i]=temp[i];

    }
}



int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    // cyclically rotate array by 2 places
    int shift =2;
    
    cout<<"Before: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rotateArray(arr,size, shift);
    // print array
    cout<<"After: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}