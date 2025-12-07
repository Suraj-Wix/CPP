#include<iostream>

using namespace std;

void fullPyramid(int n){
    // outer loop
    for(int r=0;r<n;r++)
    {
        // inner loop
        //1.spaces
        for(int c=0;c<n-r-1;c++)
        cout<<" ";
        //2. stars
        for(int c=0;c<r+1;c++)
        cout<<"* ";
        cout<<endl;

    }

}
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
void diamond(int n){
    fullPyramid(n);
    invertedFullPyramid(n);
}

 void hollowPyramid(int n){
    // leveraging full pyramid code
     // outer loop

    for(int r=0;r<n;r++)
    {
        // inner loop
        //1.spaces
        for(int c=0;c<n-r-1;c++)
        cout<<" ";
        //2. stars
        for(int c=0;c<r+1;c++){
            if(r==0/*||r==n-1*/||c==0||c==r+1-1)
           cout<<"* ";
           else
           cout<<"  ";
        }
        cout<<endl;

    }

}

void invertedHolloFullPyramid(int n){
    // outer loop
    for(int r=0;r<n;r++)
    {
        // inner loop
        //1.spaces
        for(int c=0;c<r;c++)
        cout<<" ";
        //2. stars
        for(int c=0;c<n-r;c++){
        if(/*r==0||*/r==n-1||c==0||c==n-r-1)
        cout<<"* ";
        else
            cout<<"  ";
        }
        cout<<endl;

    }
}

void holloDiamond(int n){
    hollowPyramid(n);
    invertedHolloFullPyramid(n);



}
int main()
{
    int n;
    cin>>n;
    // fullPyramid(n);
    //invertedFullPyramid(n);
    // diamond(n);
    // hollowPyramid(n);
    // invertedHolloFullPyramid(n);
    holloDiamond(n);
    return 0;

}
