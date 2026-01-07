#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v){
    cout<<"Printing vector "<<endl;
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" "; // both are same work
        // cout<<v.at(i)<<" "; // both are same work
    }
    cout<<endl;

}

int main(){
    // in vector, dont tell size of vector.
    // just keep inserting, i will manage the allocations.
    vector<int>v;//array hi hai.

    // //insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print (v);

    // pop->delete-> END
    //1-> 2 ->3
    // v.pop_back();
    // print(v);
    // v.pop_back();
    // print(v);

    // v.pop_back();
    // print(v);
    // v.pop_back();
    // print(v);

    // insert
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    print(v);
    for(int i=0;i<10;i++){
        v.push_back(80);
    }
    print (v);
    // I want to clear the vector
    v.clear();
    print(v);
}