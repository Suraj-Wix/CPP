// set Algorithms



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<int>first;
  first.push_back(1);
  first.push_back(2);
  first.push_back(3);
  first.push_back(4);
   
  vector<int>second;
  second.push_back(3);
  second.push_back(4);
  second.push_back(5);
  second.push_back(6);

  vector<int>result;


//   4/set_symmetric_difference
set_symmetric_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result, result.begin()));
for(int a:result){
    cout<<a<<" ";
  }


//   3.set_difference
// set_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result, result.begin()));
// for(int a:result){
//     cout<<a<<" ";
//   }


// 2.set_intersection
// set_intersection(first.begin(),first.end(),second.begin(),second.end(),inserter(result, result.begin()));
//  for(int a:result){
    // cout<<a<<" ";
//   }





 
//   1.set_union
//   set_union(first.begin(),first.end(),second.begin(),second.end(),inserter(result, result.begin()));

//   for(int a:result){
//     cout<<a<<" ";
//   }

  return 0;
}