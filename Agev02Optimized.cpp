#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Enter age: ";
	cin >> age;
	if(age<16)
		cout << "Too young to drive.";
	else if(age==16)
		cout << "Better to clear the road.";
	else
		cout << "You are getting pretty old.";
	return 0;
}
