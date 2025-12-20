#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[10];
    // to fill all with 67
    fill(a,a+5,67);
    fill(a+5,a+10,100);
    for(int i=0;i<10;i++){
        cout<<i<<"-->"<<a[i]<<endl;
    }
    return 0;
}