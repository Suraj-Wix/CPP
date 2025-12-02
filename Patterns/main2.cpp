#include<iostream>
using namespace std;

int main()
{
    // total rows=4;
    //every row->4 starts

    // row->outer loop
    // col->inner loop

    // outer loop->rows
    for(int rows=1;rows<=4;rows++){
        cout<<rows<<"->";
        // inner loop->4 starts print
        // hr row me kya krna hai,voh inner loop bataege
        for(int cols=1;cols<=4;cols++){
            // hr 1 single column me,1 star rakhn hai
            cout<<"Baba ka Birthday ";
        }
        //4 stars print karane k baad, next line me aata hu
        cout<<endl;
    }
    return 0;
}