#include <iostream>
using namespace std;

// Function to find min and max in an array
void findMinMax() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    delete[] arr;
}

// Function to reverse an array
void reverseArray() {
    int arr[6];
    cout << "Enter 6 elements to reverse:\n";
    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    int start=0; int end=5;
    while(start<end)
    {
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
    cout << "Reversed array: ";
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    cout << endl;
}

// Function to sum two arrays
void sumOfArrays() {
    int arr[5],brr[5];
    int sum = 0;
    cout << "Enter 5 elements for first array:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Enter 5 elements for second array:\n";
    for (int i = 0; i < 5; i++) {
        cin >> brr[i];
    }
    for (int i = 0; i < 5; i++) {
        sum += arr[i] + brr[i];
    }
    cout << "Sum of arrays: " << sum << endl;
}

int main() {
    cout << "Choose operation:\n";
    cout << "1. Find Min and Max\n";
    cout << "2. Reverse Array\n";
    cout << "3. Sum of Two Arrays\n";
    int choice;
    cin >> choice;
    switch(choice) {
        case 1: findMinMax(); break;
        case 2: reverseArray(); break;
        case 3: sumOfArrays(); break;
        default: cout << "Invalid choice\n";
    }
}