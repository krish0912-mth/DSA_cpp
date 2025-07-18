// insertion sort algorithm in C++
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++)
    {
        for(int j=i;j>0;j--){
            if (arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else {
                break;
            }
        }
        }
          cout << "After sorted array using insertion sort: ";
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
    }
}