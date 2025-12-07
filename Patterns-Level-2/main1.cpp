#include<iostream>

using namespace std;

void invertedFullPyramid(int n){
    // outer loop
    for(int r=0;r<n;r++)
    {
        // inner loop
        //1.spaces
        for(int c=0;c<r;c++)
        cout<<" ";
        //2. stars
        for(int c=0;c<n-r;c++)
        cout<<"* ";
        cout<<endl;

    }

}

int main()
{
    int n;
    cin>>n;
    invertedFullPyramid(n);
    return 0;

}
