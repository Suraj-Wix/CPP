// Searching and Finding Algorithm:
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
vector<int>arr;
arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(30);
arr.push_back(30);
arr.push_back(40);

// 4.equal_range

auto r = equal_range(arr.begin(), arr.end(), 30);

cout << (r.first - arr.begin()) << endl;
cout << (r.second - arr.begin()) << endl;








//3.upper_bound
//   auto it=upper_bound(arr.begin(),arr.end(),40);
//   cout<<*it<<endl;



// // 2.lower_bound
// auto it = lower_bound(arr.begin(),arr.end(),35);
// cout<<*it<<endl;






// 1.binary_search
// int target=40;
// bool it=binary_search(arr.begin(),arr.end(),target);
// cout<<it<<endl;


    return 0;

}
