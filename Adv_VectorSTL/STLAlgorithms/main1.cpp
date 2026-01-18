// iterators and iterating algorithms

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void printDouble(int a){
    cout<<2*a<<" ";
}

bool checkEven(int a){
    return a%2==0;
}
int main(){
  
    vector<int> arr(6);
    arr[0]=10;
    arr[1]=11;
    arr[2]=12;
    arr[3]=13;
    arr[4]=14;
    arr[5]=15;


    //8.partition:

   auto it= partition(arr.begin(),arr.end(),checkEven);

    for(int a:arr){
        cout<<a<<" ";
    }






    
    // // 7.unique

    // auto it= unique(arr.begin(),arr.end());
    // //it iteratro k phle saaare unique element hai
    // //it k baad saare duplicate element hai
    // arr.erase(it,arr.end());
    
    // for(int a:arr){
    //     cout<<a<<" ";
    // }

    // // 6.rotate ?
    // cout<<"Before:"<<endl;
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;
    // rotate(arr.begin(),arr.begin()+3,arr.end());
    // //HW->left rotate?
    // cout<<"After:"<<endl;
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;



    

    // // 6.sort
    // sort(arr.begin(),arr.end());
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;
    // reverse(arr.begin(),arr.end());

    // for(int a:arr){
    //     cout<<a<<" ";
    // }


    // //5.count_if // counting->criteria ->function
    // int ans= count_if(arr.begin(),arr.end(),checkEven);
    // cout<<ans<<endl;
    



    //4.count

    // int target =11;
    // int ans=count(arr.begin(),arr.end(),target);
    // cout<<ans<<endl;



    //3.find_if: funciton ke andar container ke range specify kr te hai
    // ish  range -> ish range ke bich me find kr te hai kya find kr na ha vo 
    // criterya iish basic pr tum ko element find krna hai function ke format me
    //write down kr te ho aur function less down kr dete ho jo funtion sabse
    // pahle ish container me milega is range ke andar function ki ciriterya ko 
    // follow kr ta hoga toh ush ka iterator return kra dete ho ish function ke dvara
    // aur ish function app save kr rahe hoge toh sabe se pahle even number ki value
    // mili the voh retrurn kr dete ho return 20 is even number

    // auto it=find_if(arr.begin(),arr.end(),checkEven);
    // cout<<*it<<endl;



    //1.for_each
    // for_each(arr.begin(),arr.end(),printDouble);

    //2.find
    // int target =40;
    // vector<int>::iterator it= find(arr.begin(),arr.end(),target); // ish se bhi target find kr sakte hai
    // cout<<*it<<endl;

    // let support app mehant nhi kr na chahte hai auto ka use kr skte hai 
    // auto it=find(arr.begin(),arr.end(),target);
    // cout<<*it<<endl;






    return 0;
}