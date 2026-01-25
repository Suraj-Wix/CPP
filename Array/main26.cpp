#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int search(vector<int>& arr, int key)
    {
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    Solution obj;

    vector<int> arr = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int key = 10;

    int result = obj.search(arr, key);

    cout << result << endl;

    return 0;
}
