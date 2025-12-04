// #include <iostream>
// using namespace std;

// int main()
// {
//     // hollo half pyramid
//     int n;
//     cout<< "Enter number of rows"<<endl;
//     cin>>n;
//     // outer loop
//     for(int r=0; r<n; r++)
//     {
//          int totalc =r+1;
// ;        // inner loop
//         for (int c=0; c<totalc; c++)
//         {
//             if (r==0||r==1||r==n-1)
//             {
//                 cout<<"* ";
//             }
//             else
//             { 
//                 // middle rows
//                 if (c==0||c==totalc-1)
//                 {
//                     cout<<"* ";
//                 }
//                 else
//                 {
//                     // middle  colums
//                     cout<<"  ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
    
// }




#include <iostream>
using namespace std;

int main()
{
    // hollo half pyramid
    int n;
    cout<< "Enter number of rows"<<endl;
    cin>>n;
    // outer loop
    for(int r=0; r<n; r++)
    {
         int totalc =r+1;
;        // inner loop
        for (int c=0; c<totalc; c++)
        {
            if (r==0||r==n-1||c==0||r==c)
            {
                cout<<"* ";
            }
            else
            { 
                // middle rows
                cout<<"  ";
            }

           
        }
        cout<<endl;
    }
    return 0;
    
}