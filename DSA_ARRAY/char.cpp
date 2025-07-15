#include<iostream>
using namespace std;
int main(){
    char letters[26];

    for (int i = 0; i < 26; i++) {
        letters[i] = 'a' + i;  
    }

    for (int i = 0; i < 26; i++) {
        cout << letters[i] << " ";  
    }
}

