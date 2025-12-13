#include<iostream>
using namespace std;

int calculateTotalSum(int a,int l, int n){
    int ans=((n)*(a+l))/2;
    return ans;
}

bool isPrime(int number)
{
    for(int i=2;i<=(number-1);i++){
        if(number % i==0){
            // not prime
            return false;
        }
    }
    // agar aap ayaha tk aaye ho
    // iska matalab kish se bhi remainder o nhi aaya
    // iska matalb aap prime ho
    // iska matlb return true;
    return true;
}

void printEvenInsideRange(int start, int end){
    for(int i=start; i<=end;i++){
        int n=i;
        if(!(n&1)){
            cout<<n<<endl;
        }

    }

}

float calculatePercentage(int sb1, int sb2, int sb3, int sb4, int sb5){
    int sum=sb1+sb2+sb3+sb4+sb5;
    int totalMarks=500;
    float percentage=(sum*100.0)/totalMarks;
    return percentage;
}

int main(){
    
    cout<<"Total:"<<calculatePercentage(95,95,95,99,88)<<endl;


    // printEvenInsideRange(101,123);



    // bool ans=isPrime(11);
    // if(ans==true){
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not prime";
    // }


    // int ap=calculateTotalSum(2,10,5);
    // cout<<ap;
    return 0;
}