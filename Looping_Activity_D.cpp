#include <iostream>

using namespace std;

int main ()
{
	int r;
	cout << "Enter number of rows: ",
	cin >> r;
	
	for (int c = 1; c <= r; c++)
	{
		for (int r = c; r >= 1; r--)
	    {
			cout << r << " ";
	    }
	cout << endl;
    }
	return 0;
}
