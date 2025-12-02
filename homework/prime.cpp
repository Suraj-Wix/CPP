#include<iostream>

using namespace std;

//1 to n print all prime numbers
bool checkprime(int n)
{
    //we will check if N is prime or not
    if(n<=1)
    {
        return false;
    }
    // check if n is devisibale by any number btween[2, n-1]
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        { 
            // kya ye prime hoga? Noooooooooo
            return false;
        }
    }

    // agr main yaha aa gya, means, N is not able to be divide by
    //any number btween[2, n-1]
    return true;
}


int main()
{  
    cout<<"Enter n: "<<endl;
    int n;
    cin>>n;
    cout<< "Prime numbers between 1 to "<<n<<" are: "<<endl;

    // 0-> <n, 1-> n<=n, dono me ntimes hi chalega
    for(int i=1;i<=n;i++)
    {
        // let's check if i is prime or not
        bool isPrime=checkprime(i);// batao i prime hai ke nhi????????
        
        // if i is prime
        if(isPrime)
        {
            cout<<"Prime:"<<i<<endl;
        }
        else
        {
           cout<<"Non-prime:"<<i<<endl;
        }
    }
    

    return 0;
}