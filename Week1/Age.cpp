#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ofstream myfile("Age.txt");
	if (myfile.is_open())
	{
		int age;
		cout << "What is your age?";
		cin >> age;

		if (!cin.good())
		{
			cout << "Wrong type" << endl;
		}
		cout << "Your age is : " << age;
		myfile << "Your age is: " << age;
		myfile.close();
	}

	return 0;
}