//  Ye question / function kya karta hai?
//  Array me diye gaye value (val) ko search karta hai
// Agar value mil jaye → uska index return karta hai
// Agar value nahi mile → -1 return karta hai
//  Example

// Socho array hai:

// [5, 8, 2, 9]


// Aur humein number 2 dhoondhna hai.

// Step-by-step (jaise bachcha check kare)

// Pehla number dekha → 5
//  5 ≠ 2 ❌

// Doosra number dekha → 8
//  8 ≠ 2 ❌

// Teesra number dekha → 2
//  2 == 2 ✅

// 🎉 Mil gaya!

//  Answer kya milega?

// 2 index 2 par hai (count 0 se start hota hai)

//  Output:

// 2

//  Agar number na mile?

// Array:

// [5, 8, 2, 9]


// Search:

// 7


// Check:

// 5 ❌ 8 ❌ 2 ❌ 9 ❌


//  Koi match nahi mila
//  Output:

// -1

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int val) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == val) {
            return i;   // value mil gayi
        }
    }
    return -1;  // value nahi mili
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int val;
    cout << "Enter value to search: ";
    cin >> val;

    int result = linearSearch(arr, n, val);

    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}


// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int val) {
//     for(int i = 0; i < n; i++) {
//         if(arr[i] == val)
//             return i;
//     }
//     return -1;
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     int val;
//     cin >> val;

//     cout << linearSearch(arr, n, val);
//     return 0;
// }
