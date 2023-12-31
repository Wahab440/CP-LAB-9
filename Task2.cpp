#include<iostream>
using namespace std;
int main() {
    int temp = 0;
    int arr[4] = { 4, 9,1,3 };
    int size = 4; 

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 3 - i ; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


