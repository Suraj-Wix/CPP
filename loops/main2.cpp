#include<iostream>
using namespace std;

int main()
{    
    // initialisation
    int i=1;
    for(; ;)
    {   
        //breaking condition
        if(i>10)
        {
            break;
        }
        cout<<"This is an infinite loop"<<endl;
        //updation
        i=i+1;
    }
    
    return 0;
}