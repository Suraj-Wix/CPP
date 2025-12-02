#include<iostream>
using namespace std;

int main()
{
    int height;
    cout<<"Enter your height in feet:"<<endl;
    cin>>height;

    int weight;
    cout<<"Enter your weight:"<<endl;
    cin>>weight;

    if(height>=5)
    {
        if(weight>=70)
        {
            cout<<"You got a good BMI"<<endl;
        }
        else{
            cout<<"Bhai tujhse na hopayega"<<endl;
        }
    }

    return 0;
}
