#include<iostream>
using namespace std;

pair<int,int> checkTwoSum(int arr[], int n, int target){
    // assuming (-1,-1) as no answer found
    pair<int,int>ans=make_pair(-1,-1);
    // check all pairs
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(arr[i]+arr[j]==target){
                //found a pair that sums to target
                ans.first=i;
                ans.second=j;
                return ans;
            }
        }
    }
    // agar app yha tak pohuch gye
    // iska matlab, koi bhi pair target k equel nahi mila
    // iska matlab return false karo
    return ans;
}

int main (){
    int arr[]={10,20,30,40};
    int n=4;
    pair<int,int> ans= checkTwoSum(arr, n,60);
    if( ans.first==-1 && ans.second==-1){
        cout<<"Pair not Found"<<endl;
    }
    else{
        cout<<"Pair Found: "<<ans.first<<","<<ans.second<<endl;
    }

    return 0;

}