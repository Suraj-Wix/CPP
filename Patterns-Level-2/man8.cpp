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

void mixPyramids(int n){
   // Part1-1
   for(int i=0;i<n;i++){
     // 1.stars
     for(int j=0;j<n-i;j++)
        cout<<"*";
     // 2.spaces
     for(int j=0;j<2*i+1;j++)
        cout<<" ";
     // 3.stars
     for(int j=0;j<n-i;j++)
        cout<<"*";
      cout<<endl;
   }
   // Part2-2
   for(int i=0;i<n;i++){
     // 1.stars
     for(int j=0;j<i+1;j++)
        cout<<"*";
     // 2.spaces
     for(int j=0;j<2*(n-i)-1;j++)
        cout<<" ";
     // 3.stars
     for(int j=0;j<i+1;j++)
        cout<<"*";
      cout<<endl;
   }
}

void fancy12(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++)
        // cout<<"$";
        if(j%2==0)
        cout<<i+1;
        else
            cout<<"*";
        cout<<endl;
    }

}
void fullfancy12(int n){
   fancy12(n);
   n--;  // 5se 4 banane ke liye
   // inverted ka logic
   for(int i=0;i<n;i++){
       for(int j=0;j<2*(n-i)-1;j++){
    //    cout<<"&"; 
        if(j%2==0)
            cout<<n-i;
            else
            cout<<"*";

        }
       cout<<endl;
    }

}
void ABCBA(int n){
   for(int i=0;i<n;i++){
        char ch='A'-1;//ASCII 64 se initilize kiya hu
    for(int j=0; j<i+1;j++){
        //  cout<<j+1;
        ch++; // ch=ch+1;kr sakte ho yaha 65 ho gya hoga ASCII 
        cout<<ch;
       
    }
    ch--;
    while(ch>'A'){
        ch--;
        cout<<ch;
    }
    cout<<endl;
   }
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
    // holloDiamond(n);
    //  mixPyramids(n);
    // fancy12(n);
    // fullfancy12(n);
     ABCBA(n);
    return 0;

}
