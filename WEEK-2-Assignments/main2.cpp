#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=n;
    
    for(int i=0;i<n;i++){
        int c=1;// number print ke liye
        for(int j=0;j<k;j++){
           if(j<n-i-1) {
            cout<<" ";
           }
           else{
                cout<<c;
                c++;
           }
            

        }
        cout<<endl;
    }
}