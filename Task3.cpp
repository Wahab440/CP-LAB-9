#include<iostream>
using namespace std;
int main() {
	int arr[4][3];
	cout << "Enter the values: ";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] < 0)
			{
				cout<< "\nThe negative values in array is: " << arr[i][j] << " ";
			}
			cout << endl;
		}
	return 0;
}



