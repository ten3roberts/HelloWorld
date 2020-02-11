#include <iostream>

using namespace std;

int main()
{
	int age;
	string name;

	cout << "Enter name > " << flush;
	cin >> name;
	cout << "Enter age > " << flush;
	cin >> age;

	cout << "Hello " << name << endl;

	if(age >= 18)
	{
		cout << "You can now drive" << endl;
	}
	if(age >= 21)
	{
		cout << "How's the alcohol?" << endl;
	}

	cout << "\n\n" << flush;
	return 0;
}