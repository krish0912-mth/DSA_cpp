#include<iostream>
using namespace std;
int  main(){
    char arr[10] = {'d', 'a', 'c', 'b', 'e', 'g', 'f', 'i', 'h', 'j'};
    cout<<"the total character of the array is: ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=8;i>=0;i--){
        bool swapped = 0;
        
        for(int j=0;j<10;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped=1;
            }
        }
        if(!swapped) break; // Array already sorted
    }
    cout<<endl;
    cout<<"the sorted character of the array is: ";
    for(int i=0;i<10;i++){ 
        cout<<arr[i]<<" ";
    }
}