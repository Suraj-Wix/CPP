#include<iostream>
using namespace std;

int main()
{    
    // totoal rows =4;
    // evey row-> 4 stars
    //row-> outer loop
    //col-> inner loop

    //couter loop -> 4rows
    for(int i=0; i<5; i++)
    {   
        //inner loop -> 4 stars
        for(int j=0; j<5; j++)
        {
            //hr 1 single column me, 1 star rakha hai
            cout<<"* ";
        }
        // 4 stars print hone k bad, ek new line me jana hai
        cout<<endl;
    }
    return 0;
}