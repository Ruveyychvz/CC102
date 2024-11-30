#include <iostream>

using namespace std;

int main ()
{
	int r;
	cout << "Enter numbers of rows: ";
	cin >> r;
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8-r; c++)
		{
			cout << "# ";
		}
		cout << endl;
	}
	return 0;
}
