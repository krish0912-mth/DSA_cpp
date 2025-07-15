#include<iostream>
using namespace std;
int main() {
    int arr[1000];
    int sum;
    for(int i=0;i<18;i++){
        cout<<"Enter the elements in the array: ";
        cin>>arr[i];
    }
    for(int i=0;i<18;i++){
        sum += arr[i];
    }
    cout<<"The sum of the elements in the array is: "<<sum<<endl;
}