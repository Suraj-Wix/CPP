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

// print krne ka ak aur method kya hai

void print2(vector<int>v){
    cout<<"Printing vector method 2"<<endl;
     for(auto it:v){
        cout<<it<<" ";
     }
    cout<<endl;

}

int main(){

    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print(v);
    print2(v);


// vector<char>v;
// v.push_back('a');
// v.push_back('b');
// v.push_back('c');

// // ab mujhe kya kr na hai startng aur end koi janna hai

// // cout<<"Front Element: "<<v[0]<<endl;
// // cout<<"End Element: "<<v[v.size()-1]<<endl;

// // front and end ko ak aur tarika kya hai
// cout<<"Front Element: "<< v.front()<<endl;
// cout<<"Front Element: "<< v.back()<<endl;

    
    
   
       
}