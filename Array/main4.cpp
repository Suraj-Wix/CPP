#include <iostream>
using namespace std;

void PrintzeroesAndones(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    // traverse array

    for (int i = 0; i < n; i++)
    {
        int currElement = arr[i];
        
        if (currElement == 0)
        {
            zeroCount++;
        }
        else if (currElement == 1)
        {
            oneCount++;
        }
    }
    cout << "Total Zeroes: " << zeroCount << endl;
    cout << "Total ones: " << oneCount << endl;
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the number of elements" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the input value for index: " << i << endl;
        cin >> arr[i];
    }
    PrintzeroesAndones(arr, size);
}
