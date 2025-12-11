#include <iostream>
using namespace std;

float circle_area(float r)
{
    float area = 3.14 * r * r;
    return area;
}
int main()
{
    float r;
    cin >> r;
    float area = circle_area(r);
    cout << "Area of Circle is: " << area << endl;
}