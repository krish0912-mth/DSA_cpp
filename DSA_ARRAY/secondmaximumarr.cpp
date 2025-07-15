#include<iostream>
using namespace std;
int main() {
    int arr[5]={1, 2, 3, 4, 5};
    int ans = INT8_MIN;
    // int max; // Removed to avoid conflict with std::max
    for(int i = 0; i < 5; i++) {
        if(arr[i] > ans) {
            ans = arr[i];
        }
    }
    int second = -1;
    for(int i = 0; i < 5; i++) {
        if(arr[i]!= ans)
        second = max(second, arr[i]); 
        }
cout << "The Second maximum Element of an array is : " << second << endl;
}