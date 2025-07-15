#include<iostream>
using namespace std;
int main()
{
    int n,k,i,num;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the power:";
    cin>>k;
    num=n;
    for(i=1;i<k;i++)
    {
        n=n*num;
    }
    cout<<n<<endl;
}