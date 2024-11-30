#include <iostream>

using namespace std;

int main ()
{
	int r;
	cout << "Enter numbers of rows: ";
	cin >> r;
	for (int r = 1; r < 8; r++){
		if (r % 2 !=0){
			cout << " ";
		}
		for (int c = 0; c < 8; c++){
			if (c % 2 == 0){
				cout << "# ";
		}else{
			cout << "* ";
		}
	}
	cout << endl;
	}
	    return 0;
}