#include <iostream>

using namespace std;

int main()
{
	int r;
	cout << "Enter numbers of rows: ";
	cin >> r;
	for (int c = r; c >= 1; c--) {
		for (int p = r-c; p > 0; p--) {
			cout << " ";
		}
		for (int e = c; e > 0; e--) {
			cout << "#";
		}
		cout << endl;
	}
}