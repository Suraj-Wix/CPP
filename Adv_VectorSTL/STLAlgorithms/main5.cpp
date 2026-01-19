// Heap Algorithm:
// make_heap	O(n)
// push_heap	O(log n)
// pop_heap	O(log n)
// sort_heap	O(n log n)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   
  vector<int>arr;
  arr.push_back(22);
  arr.push_back(11);
  arr.push_back(55);
  arr.push_back(66);
  arr.push_back(77);
   
//   1.make_heap
//   make_heap(arr.begin(),arr.end());

//   for(int a:arr){
//     cout<<a<<" ";

//   }cout<<endl;



// element insert kr ne ke baad function run krna padta hai
// push_heap
// arr.push_back(99);// mai shida arr me push kr diya element brake ho gai aur 99 nhi pahle aana chahiye the tho last me aa gya
// 2.push_heap
// push_heap(arr.begin(),arr.end());//T.C(log n) 
// for(int a:arr){
//     cout<<a<<" ";
// } cout<<endl;



// 3.deletion
make_heap(arr.begin(),arr.end());

//insertion
arr.push_back(99);
push_heap(arr.begin(),arr.end());
// mujhe kya kr na hoga deletion ke time pe pahale pop_head kr runga and baad me vector same hai remove bhi kra lunga

pop_heap(arr.begin(),arr.end());
arr.pop_back();

// 4.// sort_heap
sort_heap(arr.begin(),arr.end());
for(int a:arr){
    cout<<a<<" ";
}cout<<endl;


// arr.push_back(99);
// push_heap(arr.begin(),arr.end());
// for(int a:arr){
//     cout<<a<<" ";
// }cout<<endl;
// pop_heap(arr.begin(),arr.end()); // pop_heap se 99 ko last me pekh diya aur 99 ko remove bhi kr na padega
// for(int a:arr){
//     cout<<a<<" ";
// }cout<<endl;



    return 0;
}

