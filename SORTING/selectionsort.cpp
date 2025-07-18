#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int index = 0;
    for(int i = 0; i < n - 1; i++) {
        index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[index]) {
                index = j;
            }
        }
        if(index != i) {
            swap(arr[i], arr[index]);
        }
    }
    cout << "\nArray after sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
