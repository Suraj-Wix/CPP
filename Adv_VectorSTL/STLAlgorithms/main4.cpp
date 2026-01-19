// min and max algorithm:

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   
    //min//max in a range (contaner ke uppar)

    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);


  auto it=max_element(arr.begin(),arr.end());
  cout<<*it<<endl;


//   auto it=min_element(arr.begin(),arr.end());
//   cout<<*it<<endl;

 
    // // 2 number->compare
    // int a=10;
    // int b=15;
    // cout<<max(a,b)<<endl;
    // cout<<min(a,b)<<endl;



    return 0;
}