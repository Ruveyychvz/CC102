#include <iostream>

using namespace std;

int main()
{
	int r;
	cout << "Enter number of rows: ";
	cin >> r;
	for (int c = 1; c <= r; c++) {
		for (int p = r-c; p > 0; p--) {
			cout << " ";
		}
		for (int e = 1; e <= c; e++) {
			cout << e;
		}
		cout << endl;
	}
	return 0;
}