#include<iostream>
using namespace std;

long long int fact(int n){
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    cin>>n;
    long long int ans=fact(n);
    cout<<"Factorial of "<<n<<" is "<<ans<<endl;
    // cout<<fact(n);

}