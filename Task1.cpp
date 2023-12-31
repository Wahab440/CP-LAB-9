#include<iostream>
using namespace std;
int main()
{
	int n=0;
	int even = 0, odd = 0;
	int arr[10];
	cout << "How much long is your array= ";
	cin >> n;
	cout << "\nEnter Your Number: ";

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout << "Total Even numbers are= " << even << endl;
	cout << "Total odd numbers are= " << odd << endl;
	return 0;
}