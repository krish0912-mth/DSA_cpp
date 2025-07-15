// Find the third smallest element in an array of unique elements size n. Where n>3.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array (n > 3): ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"Enter the elements of the array: ";
    cin>>arr[i];
    }
        int third=-1;
        for(int i = 0; i < n; i++) {
            if(arr[i] != 0) {
                third = max(third, arr[i]);
            }
        }
         cout << "The Third smallest Element of an array is : " << third << endl;
    }
