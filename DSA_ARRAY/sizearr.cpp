#include<iostream>
using namespace std;
int main(){
    int a [5]={0, 1, 2, 3, 4};
    int size = sizeof(a)/sizeof(a[0]);
    cout << "The size of the array is: " << size << endl;
}