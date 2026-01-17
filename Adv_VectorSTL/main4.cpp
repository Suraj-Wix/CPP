#include<iostream>
#include<stack>
using namespace std;

int main(){

    // creation

    stack<int>st;
    //insertion
    st.push(10);
    //10
    st.push(20);
    //10,20
    st.push(30);
    //10,20,30

    cout<<st.size()<<endl;
    st.pop();
    //10,20
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    //10
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    if(st.empty()==true){
        cout<<"stack is empty"<<endl;

    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    // stack<int>::iterator it=st.begin(); // stack me iterator name ka kuch hai nhi app pop kr ke iterate kr sakte hai
    // ak element pakda bhir itrate and agla element pakda fir itrate

    return 0;
}