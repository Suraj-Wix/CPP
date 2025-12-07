#include <iostream>
using namespace std;

int main()
{
    // // Reactangle

    //   int length;
    //   int width;
    //   cout<<"Enter lenght"<<endl;
    //   cin>>length;
    //   cout<<"Enter widht"<<endl;
    //   cin>>width;
    // // outer loop->rows
    // for(int i=0; i<length; i++){
    //     // inner loop->cols
    //     for(int j=0; j<width; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // //square
    // int side;
    // cout<<"Enter n"<<endl;
    // cin>>side;
    // for(int i=0; i<side; i++){
    //     for(int j=0; j<side; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // hoolow rectangle
    // int length;
    // int width;
    // cout << "Enter lenght" << endl;
    // cin >> length;
    // cout << "Enter widht" << endl;
    // cin >> width;
    // // outer loop->rows
    // for (int i = 0; i < length; i++)
    // {
    //     // inner loop->cols
    //     for (int j = 0; j < width; j++)
    //     {
    //         // logic for hollow rectangle
    //         if (i == 0 || i == length - 1)
    //         {
    //             cout << "* ";
    //         }
    //         // for middle rows
    //         else
    //         {
    //             if (j == 0 || j == width - 1)
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    // hollow squre

    //  int side;
    //  cout<<"Enter the no of row"<<endl;
    //  cin>>side;
    //   // outer loop
    //  for(int r=0;r<side;r++){
    //     // inner loop
    //     for(int c=0;c<side;c++)
    //     {
    //        if(r==0||r==side-1)
    //        {
    //          cout<<"* ";
    //        }
    //        //middle row
    //        else if(c==0||c==side-1)
    //        {
    //         cout<<"* ";

    //        }
    //        else
    //        {
    //         cout<<"  ";
    //        }
    //     }
    //     cout<<endl;
    //  }

    // half pyramid

    // int n;
    // cout<<"Enter the number of row"<<endl;
    // cin>>n;

    // // outer loop
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // inverted half pyramid
    // int n;
    // cout<<"Enter the number of row"<<endl;
    // cin>>n;

    // // outer loop
    // for(int r=0;r<n;r++){
    //     for(int c=0;c<n-r;c++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cout << "Enter the number of row" << endl;
    // cin >> n;

    // // outer loop
    // for(int i=0;i<n;i++){
    //     int totalj=i+1;
    //     for(int j=0;j<totalj;j++)
    //     {
    //         if(i==0||i==1|| i==n-1)
    //         {
    //             cout<<"* ";
    //         }
    //         else{
    //             //middle row
    //             if(j==0||j==totalj-1)
    //             {
    //                 cout<<"* ";
    //             }
    //             else{
    //                // middle columns
    //                cout<<"  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cout << "Enter the number of row" << endl;
    // cin >> n;
    // hollow half pyramid
    // outer loop
    // for (int row = 0; row < n; row++)
    // {
    //     int totalcol = row + 1;
    //     for (int col = 0; col< totalcol; col++)
    //     {
    //         if (row == 0 || row == n-1 || col== 0 || row == col)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }

    //     }
    //     cout<<endl;

    // inverted half hollow pyramid
    // int n;
    // cout << "Enter the number of row" << endl;
    // cin >> n;

    //     for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         if (row == 0 || row == n - 1 || col == 0 || (row + col)== n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // numeric half pyramid
    // int n;
    // cout << "Enter the number of n" << endl;
    // cin >> n;

    //     for (int row = 0; row < n; row++){
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << col + 1;
    //     }

    //     cout << endl;
    // }

   
    // inverted half pyramid

    int n;
    cout << "Enter the number of n" << endl;
    cin >> n;

        for (int row = 0; row < n; row++){
        for (int col = 0; col < n-row; col++)
        {
            cout << col + 1;
        }

        cout << endl;
    }
    return 0;
}