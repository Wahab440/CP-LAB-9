#include<iostream>
using namespace std;
int maxint(int array[],int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		if (array[i] > array[i + 1]) {
			temp = array[i];
		}
	}
	return temp;
}
int main() {
	int arr[5];
	int size = 5;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "\nEnter the elements in the array: " ;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	cout<<"MAximum value is "<<maxint(arr, size);
	return 0;
}


