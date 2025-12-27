// #include <iostream>
// using namespace std;

// void sortZeroOneTwo(int arr[], int n) {
//     int zeroCount = 0;
//     int oneCount  = 0;
//     int twoCount  = 0;

//     // 🔹 counting
//     for(int i = 0; i < n; i++) {
//         if(arr[i] == 0)
//             zeroCount++;
//         else if(arr[i] == 1)
//             oneCount++;
//         else if(arr[i] == 2)
//             twoCount++;
//     }

//     // 🔹 insertion / overwrite
//     int index = 0;

//     // put 0s
//     for(int i = 0; i < zeroCount; i++) {
//         arr[index++] = 0;
//     }

//     // put 1s
//     for(int i = 0; i < oneCount; i++) {
//         arr[index++] = 1;
//     }

//     // put 2s
//     for(int i = 0; i < twoCount; i++) {
//         arr[index++] = 2;
//     }
// }

// int main() {
//     int arr[] = {0, 1, 2, 1, 0, 2, 1, 0};
//     int size = 8;

//     sortZeroOneTwo(arr, size);

//     // printing
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void sortZeroOneTwo(int arr[], int n) {
//     int zeroCount = 0;
//     int oneCount  = 0;
//     int twoCount  = 0;

//     // 🔹 counting
//     for(int i = 0; i < n; i++) {
//         if(arr[i] == 0) {
//             zeroCount++;
//         }
//         else if(arr[i] == 1) {
//             oneCount++;
//         }
//         else if(arr[i] == 2) {
//             twoCount++;
//         }
//     }

//     // 🔹 fill method (same tumhara logic)
//     fill(arr, arr + zeroCount, 0);
//     fill(arr + zeroCount, arr + zeroCount + oneCount, 1);
//     fill(arr + zeroCount + oneCount, arr + n, 2);
// }

// int main() {
//     int arr[] = {0, 1, 2, 1, 0, 2, 1, 0};
//     int size = 8;

//     sortZeroOneTwo(arr, size);

//     // printing
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

void sortZeroOneTwo(int arr[], int n) {
    int zeroCount = 0;
    int oneCount  = 0;
    int twoCount  = 0;

    // 🔹 counting (while loop)
    int i = 0;
    while(i < n) {
        if(arr[i] == 0)
            zeroCount++;
        else if(arr[i] == 1)
            oneCount++;
        else if(arr[i] == 2)
            twoCount++;
        i++;
    }

    // 🔹 overwrite array using while loop
    int index = 0;

    // put 0s
    while(zeroCount > 0) {
        arr[index++] = 0;
        zeroCount--;
    }

    // put 1s
    while(oneCount > 0) {
        arr[index++] = 1;
        oneCount--;
    }

    // put 2s
    while(twoCount > 0) {
        arr[index++] = 2;
        twoCount--;
    }
}

int main() {
    int arr[] = {0, 1, 2, 1, 0, 2, 1, 0};
    int size = 8;

    sortZeroOneTwo(arr, size);

    // printing
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
