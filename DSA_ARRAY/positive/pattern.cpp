#include<iostream>
using namespace std;
int main()
{
    int  rows,col;
    for(rows=1;rows<=5;rows++)
    {
        for(col=rows;col>=rows;col--)
        {
            cout<<rows<<" ";
        }
        cout<<endl;
    }
} 