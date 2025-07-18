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

    // Bubble Sort - Smallest to front, start from last
    for(int i = 0; i <= n; i++) {
        bool swapped = false;

        for(int j = n - 1; j > i; j--) {
            if(arr[j] < arr[j - 1]) 
            {
                swap(arr[j], arr[j - 1]);
                swapped = true;
            }
        }

        if(!swapped) break; // Array already sorted
    }

    cout << "Sorted array in ascending order:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
