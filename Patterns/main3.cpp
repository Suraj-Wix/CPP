#include<iostream>
using namespace std;

int main()
{
    // for(int i=1;i<=3;i++){
    //     cout<<i<<"->";
    //     for(int j=1;j<=5;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    

    // Rectagle
    int length,width; 
    cout<<"Enter lengrh"<<endl;
    cin>>length;
    cout<<"Enter width"<<endl;
    cin>>width;

    for(int i=1;i<length;i++){
        cout<<i<<"->";
        for(int j=1;j<width;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}