#include <iostream>
using namespace std;
void displayDiagonal(int,int);//function declaration

int main()
{
    int rows,cols;
    rows = 0;
    cols = 0;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of colums: ";
    cin>>cols;
    
    if (rows == cols)
    {
        displayDiagonal(rows,cols);//call function
    }
    else 
    {
        cout<<"Wrong input! Num of rows should be equal to num of cols";
    }
    return 0;
}
//function definition 
void displayDiagonal(int rows, int cols)
{
    for (int i = 1;i<=rows;i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == j)
            {
             cout<<i<<" ";   
            }
            else 
            {
                cout<<0<<" ";
            }
        }
        cout<<"\n";
    }
}
