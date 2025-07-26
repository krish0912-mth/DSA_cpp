#include <iostream>
using namespace std;
int BinarySearchFindFirst(int arr[], int n, int target) {
    int start = 0, end = n - 1, mid;
    int firstIndex = -1; 

    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == target) {
            firstIndex = mid; 
            end = mid - 1; 
        } else if (arr[mid] < target) {
            start = mid + 1; 
        } else {
            end = mid - 1; 
        }
           return firstIndex;
    }
    return -1;
}
int BinarySearchfindlatst(int arr[], int n, int target) {
    int start = 0, end = n - 1, mid;
    int lastIndex = -1; 
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == target) {
            lastIndex = mid; 
            start = mid + 1; 
        } else if (arr[mid] < target) {
            start = mid + 1; 
        } else {
            end = mid - 1; 
        }
    }
    return lastIndex;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the element to search for its first occurrence: ";
    cin >> target;
    
    int result = BinarySearchFindFirst(arr, n, target);
    cout << "First occurrence of element found at index: " << result << endl;
    int lastresult = BinarySearchfindlatst(arr, n, target);
    cout << "Last occurrence of element found at index: " << lastresult << endl;
}
