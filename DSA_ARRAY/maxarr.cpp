#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cout<<"enter the elements in the array:";
        cin>>a[i];
    }
    int max= INT8_MIN;
    for (int i=0;i<5;i++){
        if(a[i]>max)
            max=a[i];  
}
    cout<<"The maximum element in the array is: "<<max<<endl;
    return 0;
}