#include<iostream>
using namespace std;

int main()
{
    // inverted holow half pyramind
    int n;
    cout<<"Enter number  of rows"<<endl;
    cin>>n;
    // outer loop
    for(int r=0;r<n;r++)
    {
        // inner loop
        for(int c=0;c<n-r;c++)
        {
            if(r==0||r==n-1||c==0||(r+c==n-1))
            {
                cout<<"* ";
            
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}