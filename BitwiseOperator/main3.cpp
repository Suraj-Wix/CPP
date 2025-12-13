#include <iostream>

using namespace std;

int main()
{
    int number = 3;
    int setBitCount = 0;

    while (number != 0)
    {
        int lastBit = (number & 1);
        if (lastBit == 1)
        {
            setBitCount = setBitCount + 1;
        }
        // right shift
        number = number >> 1;
    }
    

    cout<<"total set bits: "<<setBitCount<<endl;
}