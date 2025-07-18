// Selection Sort Algorithm to sort the array of char in ascending order.
#include<iostream>
using namespace std;
int  main(){
    char arr[10] = {'d', 'a', 'c', 'b', 'e', 'g', 'f', 'i', 'h', 'j'};
    cout<<"the total character of the array is: ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<9;i++){
        int index = i;
        for(int j=i+1;j<10;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
         swap(arr[i], arr[index]);
    }
    cout<<endl;
    cout<<"the sorted character of the array is: ";
    for(int i=0;i<10;i++){ 
        cout<<arr[i]<<" ";
    }
}