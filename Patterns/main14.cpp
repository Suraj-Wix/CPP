#include<iostream>
using namespace std;

int main()
{
    // nummeric half pyramind
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;

    // outer loop
    for(int r=0;r<n;r++)
    {
        // inner loop
        for(int c=0;c<r+1;c++)
        {
            cout<<c+1<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}