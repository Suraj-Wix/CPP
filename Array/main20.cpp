#include<iostream>
#include<climits>
using namespace std;

void checkTwoSumAllAnswer(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                //found a pair that sums to target
                cout<<arr[i]<<", "<<arr[j]<<endl;
            }
        }
    }
    // agar app yha tak pohuch gye
    // iska matlab, koi bhi pair target k equel nahi mila
    // iska matlab return flase karo
    return;
}




int main(){
    int arr[]={10,20,30,40};
    int n=4;
    int target=60;
    checkTwoSumAllAnswer(arr,n,target);

    return 0;
}