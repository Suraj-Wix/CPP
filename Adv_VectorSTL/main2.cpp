#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(10);
    //10->20->30

    //  list<int>second;
    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // //100->200->300

   first.insert(first.begin(),100); 
    //100->10->20->10
   
    cout<<first.size()<<endl;
    first.erase(first.begin(),first.end());
    cout<<first.size()<<endl;





    // cout<<"before removing: "<<endl;
    // list<int>::iterator it1=first.begin();

    // while(it1 !=first.end()){
    //     cout<<*it1<<" ";
    //     it1++;
    // }cout<<endl;






    // cout<<"before removing: "<<endl;
    // list<int>::iterator it1=first.begin();

    // while(it1 !=first.end()){
    //     cout<<*it1<<" ";
    //     it1++;
    // }cout<<endl;

    // first.swap(second);

    // cout<<"before removing: "<<endl;
    // list<int>::iterator it2=first.begin();

    // while(it2 !=first.end()){
    //     cout<<*it2<<" ";
    //     it2++;
    // }cout<<endl;

    // // creation linked list
    // list<int>myList;

    // // insertion
    // myList.push_back(10);
    // //10
    // myList.push_back(20);
    // //10->20
    // myList.push_back(30);
    // //10->20->30
    // myList.push_back(40);
    // //10->20->30->40

    // myList.push_front(100);
    // //100->10->20-20->40

    // myList.pop_back();
    // //100->10->20->30

    // myList.pop_front();
    // //10->20->30
    // myList.push_back(10);
    // //10->20->30->10

    // cout<<"before removing: "<<endl;
    // list<int>::iterator it=myList.begin();

    // while(it !=myList.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }cout<<endl;

    // myList.remove(10);

    // cout<<"after removing: "<<endl;
    // list<int>::iterator it2=myList.begin();

    // while(it2 !=myList.end()){
    //     cout<<*it2<<" ";
    //     it2++;
    // }cout<<endl;

    // cout<<myList.front()<<endl;
    // cout<<myList.back()<<endl;

    // cout<<myList.size()<<endl;
    // myList.clear();
    // cout<<myList.size()<<endl;

    // if(myList.empty()==true){
    //     cout<<"List is empty"<<endl;
    // }
    // else{
    //     cout<<"List is not empty"<<endl;
    // }



    return 0;
}