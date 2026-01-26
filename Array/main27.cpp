#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        // 1. sort the array
        sort(arr.begin(), arr.end());

        int minDiff = INT_MAX;

        // 2. find minimum difference
        for(int i = 1; i < arr.size(); i++) {
            int diff = arr[i] - arr[i - 1];
            minDiff = min(minDiff, diff);
        }

        vector<vector<int>> ans;

        // 3. store all pairs having minimum difference
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] - arr[i - 1] == minDiff) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }

        return ans;
    }
};

int main() {
    Solution s;

    vector<int> arr = {4, 2, 1, 3};

    vector<vector<int>> result = s.minimumAbsDifference(arr);

    for(auto p : result) {
        cout << "[" << p[0] << ", " << p[1] << "] ";
    }

    return 0;
}
