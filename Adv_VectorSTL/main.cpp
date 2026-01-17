#include<iostream>
#include<vector>
using namespace std;


int main(){

   vector<int>first;
//    vector<int>second;

   first.push_back(10);
   first.push_back(11);
   first.push_back(12);
   first.push_back(13);

   // traversing the vector using iterator

   //create an iterator
   vector<int>::iterator it=first.begin();
   while(it !=first.end()){
    cout<<*it<<" ";
    it++;
   }



//    second.push_back(100);
//    second.push_back(200);
//    second.push_back(300);
//    second.push_back(400);

//    first.swap(second);

//    cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<" "<<first[3]<<endl;

//    for(int i:first){
//     cout<<i<<" ";
//    }

//    for(int i:second){
//     cout<<i<<" ";
//    }





    // creation 
    // vector<int>marks(5,-1);
    // vector<int>marks;
    // cout<<marks.max_size()<<endl;
    // marks.reserve(10);
    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.push_back(30);
    // marks.clear();
    // marks.insert(marks.begin(),50);

    // cout<<marks.size()<<endl;
    // cout<<marks[0]<<endl;

    // marks.erase(marks.begin(),marks.end());
    // cout<<marks.size()<<endl;



    // cout<<marks.capacity()<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks.at(0)<<endl;

    // // marks[0]=100;
    // cout<<marks[0]<<endl;

    // cout<<marks[0]<<endl;

    // cout<<"Size: "<<marks.size()<<endl;
    
    // if(marks.empty()==true){
    //     cout<<"vector is empty "<<endl;
    // }
    // else{
    //     cout<<"vector is not empty "<<endl;
    // }


    // 40 will be removed
    // marks.pop_back();
    // cout<<"Size: "<<marks.size()<<endl;
    // cout<<marks.front()<<endl;
    // cout<<marks.back()<<endl;



    // cout<<*(marks.begin())<<endl;

    // vector<int>miles(10);

    // vector<int>distance(15,0);

//    vector<int>age(100);
//    age[0]=10;



    return 0;
}