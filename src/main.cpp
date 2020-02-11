#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age;
	string name;

	cout << "Enter name > " << flush;
	cin >> name;
	cout << "Enter age > " << flush;
	cin >> age;
	// Capitalize
	name[0] = toupper(name[0]);

	cout << "Hello " << name << endl;
	if(age >= 18)
	{
		cout << "You can now drive" << endl;
	}
	if(age >= 21)
	{
		cout << "How's the alcohol?" << endl;
	}
	if(age >= 69)
	{
		cout << "Time to stop work" << endl;
	}
	cout << "\n\n" << flush;
	return 0;
}