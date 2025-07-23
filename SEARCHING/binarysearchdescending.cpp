#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
        int start=0,end=n-1,mid;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==key){
              return mid;
            }
            else if (arr[mid]<key){
                end=mid-1; // Search in the left half
            }
            else
            start=mid+1;
        }
        return -1;
}
int main(){
     int n;
    cout<<"Enter the size of an array:  ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in descending order: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key whose index you want: ";
    cin>>key;
    int result=BinarySearch(arr,n,key);
    cout<<"index of key: "<<result;
}
    