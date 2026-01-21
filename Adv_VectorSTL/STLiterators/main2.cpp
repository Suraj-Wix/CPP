// iteratoBasics
#include<iostream>
#include<vector>
#include<forward_list>
#include<list>

using namespace std;


int main(){

   // Random Access Iterator
//    vector<int> arr={10,20,30,40,50};
vector<int> arr;
arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(40);
arr.push_back(50);

   // traverse using iterator
//    vector<int>::iterator it=arr.begin();

//    while(it!=arr.end()){
//     //write
//     *it=*it+7;
//     //read
//     cout<<*it<<" ";
//     //forward move
//     it++;
//    }

  //let's try backward movement in vector iterator
//   vector<int>::iterator it=arr.end()-1;

//   while(it !=arr.begin()){ // 30, 20 print ho raha hai but 10 nhi print ho raha aap jaise hi 10 vale starting address pr aaye app vaise hi iterator ko loop se bahar nikal diya
//     cout<<*it<<" ";
//     it--;
//   }

// vector<int>::iterator it=arr.end();

//       while(it !=arr.begin()){
//         // pehle piche jaunga ->backward
//         it--;
//         // fer print
//         cout<<*it<<" ";
//       }


// random access iterator

vector<int>::iterator it=arr.begin()+3;
cout<<*it<<endl;










  
    //by-directional iterator
    // list<int>myList;
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);

    // //traverse using iterator
    // list<int>::iterator it=myList.begin();
    // while(it !=myList.end()){
    //     //writing
    //     (*it)=(*it)+2;
    //     //read
    //     cout<<(*it)<<" ";
    //     //forward move
    //     it++;
    // }

    // let's try moving backward in list
    // list<int>::iterator it= myList.end();
    // while(it !=myList.begin()){
    //     it--;
    //     //write
    //     *it=*it+5;
    //     cout<<*it<<" ";
    // }





    //forward Iterator
    // forward_list<int> list;
    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);


    // forward_list<int>::iterator it=list.begin();

    // while(it !=list.end()){
    //     // read
    // //    cout<<*it<<" "
    //     //write
    //     (*it)=(*it)+5;
    //      it++;
    // }
    
    
    // it=list.begin();
    // // printing ka work
    // while(it !=list.end()){
    //     cout<<*it<<" ";

    //     it++;
    // }

     
    // let's try moving backward
    // it-- posible nhi
    // forward_list<int>::iterator it=list.end();
    //   while(it !=list.begin()){
    //     cout<<*it<<" ";
    //     --it;
    //   }

    return 0;
}

