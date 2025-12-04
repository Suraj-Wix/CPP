#include<iostream>
using namespace std;

int main()
{
    // half pyramid
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    // outer loop
    for(int r=0;r<n;r++){
        // inner loop
        for(int c=0;c<r+1;c++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}