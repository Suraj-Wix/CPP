#include<iostream>
#include<climits>
using namespace std;

void checkTwoSumUsingArray(int arr[],int n,int target,int ans[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                //found a pair that sums to target
                ans[0]=arr[i];
                ans[1]=arr[j];
                return;
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
    int ans[2]={INT_MAX,INT_MAX};
    int target=60;
    checkTwoSumUsingArray(arr,n,target,ans);

    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}