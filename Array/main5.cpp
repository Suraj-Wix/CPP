// #include<iostream>
// #include<limits.h>
// using namespace std;

// void extremePrint(int arr[],int n){
//     int i=0;
//     int j=n-1;

//     while(i<j){
//         cout<<arr[i]<<" ";
//         i++;
//         cout<<arr[j]<<" ";
//         j--;
//     }
// }

// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=6;
//     extremePrint(arr,size);

//     return 0;
// }

// #include <iostream>
// #include <limits.h>
// using namespace std;

// void extremePrint(int arr[], int n)
// {
//     int i = 0;
//     int j = n - 1;
//     while (i <= j)
//     {
//         if (i == j)
//         {
//             // print only 1 time
//             cout << arr[i] << " ";
//             i++; // yaha pr break; bhi kr sakte hai
//         }
//         else
//         {

//             cout << arr[i] << " ";
//             i++;
//             cout << arr[j] << " ";
//             j--;
//         }
//     }
// }

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int size = 6;
//     extremePrint(arr, size);

//     return 0;
// }

#include <iostream>
#include <limits.h>
using namespace std;

void extremePrint(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        cout << arr[i] << " ";
        i++;
        if (j > i)
        {
            cout << arr[j] << " ";
            j--;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    extremePrint(arr, size);

    return 0;
}