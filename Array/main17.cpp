#include<iostream>
using namespace std;

bool checkTwoSum(int arr[], int n, int target){
    // check all pairs
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(arr[i]+arr[j]==target){
                //found a pair that sums to target
                return true;
            }
        }
    }
    // agar app yha tak pohuch gye
    // iska matlab, koi bhi pair target k equel nahi mila
    // iska matlab return false karo
    return false;
}

int main (){
    int arr[]={10,5,20,15,30};
    int n=4;
    bool ans= checkTwoSum(arr, n,35);
    if( ans ==true){
        cout<<"Pair Found"<<endl;
    }
    else{
        cout<<"Pair Not Found"<<endl;
    }

    return 0;

}