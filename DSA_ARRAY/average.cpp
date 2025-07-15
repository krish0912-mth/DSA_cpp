#include<iostream>
using namespace std;
int main(){
    int arr[1000],average;
   for(int i=0;i<18;i++){
    cout<<"enter the elements in an array: ";
    cin>>arr[i];
   }
   for(int i=0;i<18;i++){
    average=arr[i]/2;
   }
   cout<<"The average of the elements in the array is: "<<average<<endl;
}