#include<iostream>
using namespace std;

void findfirstOccurrence(int arr[], int n, int target,int &ansIndex){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target){
    // ans found -> may or may not be first occurrence
    // store and compute

    ansIndex=mid;
    //kyoki first occurrence ki baat hori h
    //toh batao left me jau first occ k liye ya right me
    //left me jao
    e=mid-1;

        }
        if(target>arr[mid]){
            //right me jao
            s=mid+1;

        }
        if(target<arr[mid]){
            //left me jao
            e=mid-1;
        }
        // ye main bhul jata hu
        mid=s+(e-s)/2;
    }
}

void findLastOccurrence(int arr[], int n, int target,int &ansIndex){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target){
    // ans found -> may or may not be first occurrence
    // store and compute

    ansIndex=mid;
    //kyoki first occurrence ki baat hori h
    //toh batao left me jau first occ k liye ya right me
    //right me jao
    s=mid+1;

        }
        if(target>arr[mid]){
            //right me jao
            s=mid+1;

        }
        if(target<arr[mid]){
            //left me jao
            e=mid-1;
        }
        // ye main bhul jata hu
        mid=s+(e-s)/2;
    }
}


int main(){
    int arr[]={20,20,20,20,20,20,20,30,40,50,60};
    int n=11;
    int target=20;
    // -1 means target not found
    int ansIndex=-1;

    //binary search lagane jaa ra hu, toh pakka array sorted hi hoga

    // findfirstOccurrence(arr,n,target,ansIndex);
    // cout<<"first Occ index:"<<ansIndex<<endl;
    findLastOccurrence(arr,n,target,ansIndex);
    cout<<"last Occ index:"<<ansIndex<<endl;

    return 0;
}