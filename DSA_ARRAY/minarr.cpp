#include<iostream>
using namespace std;
int main() {
    int arr[5]={2, 3, 9, 10, 28};
    int ans = INT8_MAX;
    for(int i=0;i<5;i++){
        if (arr[i]<ans)
        ans = arr[i];
    }
    cout << "The minimum element in the array is: " << ans << endl;
 
}