#include <iostream>
using namespace std;

int main()
{
	string nickname, courseYearLevel, school;
	cout << "Nickname:";
	cin >> nickname;
	
	cout << "CourseYear Level:";
	cin >> courseYearLevel;
	
	cout << "School:";
	cin >> school;
	
	cout << "\nWow congrats " << nickname << "! " << courseYearLevel << " is a nice course. And you are studying in " << school << " which is one of the Centers of Excellence in Tertiary Education.\n";
	return 0;
}
