#include<iostream>
using namespace std;
//  My  method to reverse an array
int main()
{
    int arr[] = {1,2,3,4,5,6};
    for(int i = 5; i >= 0; i--)
    {
        cout << arr[i]<< " ";
    }

// Another method to reverse an array
    int arr2[6] = {1,2,3,4,5,6};
    int start = 0, end = 5;
    while(start<end){
        swap(arr2[start], arr2[end]);
        start++;
        end--;

    }
    for(int i = 0; i < 6; i++){
        cout << arr2[i] << " ";
}
}
