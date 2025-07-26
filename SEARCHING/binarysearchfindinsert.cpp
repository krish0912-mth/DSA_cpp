#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid,index = -1;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == key) {
            index= mid; // Element found
        }
        else if (arr[mid] < key) {
            start = mid + 1; 
        } else {
            index=mid;
            end = mid - 1; 
        }
    }
    return -1; // Element not found
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to search: ";
    cin>>key;
    int result = BinarySearch(arr, n, key);
    cout<<"Elements found at index: "<<result << endl;  
}
