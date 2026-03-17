#include<iostream>
#include<unordered_map>

using namespace std;



int main(){
    unordered_map<int ,int>desk_map;//roll_no ,desk_no

    //insertion
    desk_map[1]=53;//desk_map ki 1 key per, 53 desk no assign kr diya
    desk_map[2]=54;
    desk_map[3]=55;

    desk_map[2]=57;// reassign , qki key=2 was already there.

    //iterate 
    // I have to iterate over 3 entries
    // for loop
    // map me iterate krne ke liye, make an iterator

    unordered_map<int,int>::iterator it;
    for(it=desk_map.begin(); it!=desk_map.end(); it++){
        int key =it->first;
        int value = it->second;
        cout<<"Key: "<<key<<" "<<"Value: "<<value<<endl;
    }

    // another syntax
    //for-each
    for(auto it: desk_map){
        int key =it.first; // syntax
        int value = it.second;
        cout<<"Key: "<<key<<" "<<"Value: "<<value<<endl;
    

    }
    return 0;
}