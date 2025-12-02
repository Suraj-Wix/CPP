#include<iostream>
using namespace std;

int getMultiplication(int x, int y, int z)
{
    int result =x*y*z;
    return result;

}

void printNameTenTimes()
{
    for(int i=1; i<=10;i++)
    {
        cout<<"babbar"<<endl;
    }
} 

void printMultiples(int num) {
   for(int i=1;i<=10;i++)
   {
    cout<<num*i<<endl;
   }
}

int convertIntoCelcius(int far)
{
    int celcius= (far-32)*5/9;
    return celcius;
}

char convertIntoUpperCase(char ch)
{
    char answer = ch-'a'+'A';
    return answer;
}
int main()
{
     // function call
    // int multiplicationAnswer = getMultiplication(5,4,3);
    // cout<<multiplicationAnswer<<endl;

    // printNameTenTimes();
    
    //  int m=5;
    // printMultiples(m);


//     int far=32;
//    int ans= convertIntoCelcius(far);
//    cout<<"IN Celcius: "<<ans<<endl;

char result = convertIntoUpperCase('k');
cout<< result<<endl;

   

    
    return 0;
}