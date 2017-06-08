#include <stdio.h>
#include <fstream>
#include <iostream>


using namespace std;

int main()
{
	ifstream fin("Matrix.txt");

	// Declare variables:
	int rows, columns, not_zeros;

	// Ignore headers and comments:
	while (fin.peek() == '%') fin.ignore(2048, '\n');

	// Read defining parameters:
	fin >> rows >> columns >> not_zeros;

	cout << "Number of rows: " << rows << endl;
	cout << "Number of columns: " << columns << endl;
	cout << "Number of not-zeros: " << not_zeros << endl;

	fin.close();

	
	return 0;
}