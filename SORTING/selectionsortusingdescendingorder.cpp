// sorting an array of integers in decreasing order
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"array before sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    for(int i = 0;i<n-1;i++) {
        int index = i;
        for (int j=i+1;j<n;j++) {
            if (arr[i]< arr[j]) {
                index = j;
            }
            swap(arr[i], arr[index]);
        }
    }
    cout << "\nArray after sorting in decreasing order: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}