#include<iostream>
using namespace std;

int main()
{
    
    // square
    int side;
    cout<<"Enter length of side of square"<<endl;
    cin>>side;
    for(int i=1;i<=side;i++){
        cout<<i<<"->";
        for(int j=1;j<=side;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}