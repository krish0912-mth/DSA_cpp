#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in an array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Corrected insertion sort using for loop and swap for descending order
    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--) {
            // Compare current element with the previous one
            if(arr[j] > arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    cout << "The sorted array in descending order is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}
