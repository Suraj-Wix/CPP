#include<iostream>
#include<vector>
using namespace std;


int main(){
    // creation 
    // vector<int>marks(5,-1);
    vector<int>marks;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout<<"Size: "<<marks.size()<<endl;
    // 40 will be removed
    marks.pop_back();
    cout<<"Size: "<<marks.size()<<endl;
    cout<<marks.front()<<endl;
    cout<<marks.back()<<endl;



    // cout<<*(marks.begin())<<endl;

    // vector<int>miles(10);

    // vector<int>distance(15,0);

    return 0;
}