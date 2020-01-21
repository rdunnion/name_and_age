// name and age exercise chap 3
#include <iostream>
using namespace std;


int main()
{
	cout << "Please enter your first name and age in years:\n";
	string first_name;
	double age;
	cin >> first_name >> age;
	cout << "Hello, " << first_name << " (age in months " << age * 12 << ")!\n";

	return 0;
}