#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v){
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;

}

int main(){
    // in vector, dont tell size of vector.
    // just keep inserting, i will manage the allocations.
    vector<int>v;//array hi hai.

    while(1){
        int d;
        cin>>(d);
        v.push_back(d);
        cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
    }

    //insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print (v);
}