#include<istream>
#include<vector>

using namespace std;

int main(){

    // 2D Array/vector

    vector<vector<int> > arr(5, vector<int>(4,0));
    int totalRows=arr.size();
    int totalColumns=arr[0].size();

    vector<vector<int> > brr(4);

    brr[0]=vector<int>(5);
    brr[1]=vector<int>(2);
    brr[2]=vector<int>(5);
    brr[3]=vector<int>(3);

    int totalRowCount=brr.size();
    //int totalColumnCount =brr[i].size();

    //2d array created
    // with 5 rows
    // with 4 columns
    // with intial value of each cell as "0"


}