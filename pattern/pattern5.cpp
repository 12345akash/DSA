#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n ";
    cin>>n;
     
     for (int row = 1; row <=(2*n-1); row++)
      {
            // for every row, run the col
            int totalrow =row>n ?(2*n-row):row;
            for (int col = 1; col <=totalrow; col++) 
            {
            cout<<"*";
            }
            // when one row is printed, we need to add a newline
            cout<<endl;
        }
    
     return 0;
}