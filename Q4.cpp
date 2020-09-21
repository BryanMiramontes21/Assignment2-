//Question 4
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int R1, R2, number;
	cout << "input number :"; cin >> number;
	R1 = (rand()%number);
	R2 = (rand() % number);
	cout << R1 << endl;
	cout << R2 << endl;
	cout << R1 + R2 << endl;
	
	return 0;
}