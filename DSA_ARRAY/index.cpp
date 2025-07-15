#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the size of an array is :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in an array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element to search: ";
    cin>>target;
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            index = i;
            break;
        }
        cout<<"The index of the element is: ";
        cout<<index<<endl;
    }
}