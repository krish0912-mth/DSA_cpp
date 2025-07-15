#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 4, -1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Create a boolean array to mark presence
    bool present[n + 1] = {false};

    // Step 2: Mark all values between 1 and n
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n)
            present[arr[i]] = true;
    }

    // Step 3: Find the first index that is false
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            cout << "Smallest missing positive: " << i << endl;
            return 0;
        }
    }

    // If all from 1 to n are present, then answer is n+1
    cout << "Smallest missing positive: " << (n + 1) << endl;
    return 0;
}