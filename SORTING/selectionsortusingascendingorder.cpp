#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        int index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
            swap(arr[i], arr[index]);
        }
    }
    cout<<"\nThe sorted array in ascending order is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
     
    
    



  