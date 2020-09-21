//Question3
#include <iostream>

using namespace std;

int main()
{
	const int YEN_PER_DOLLAR = 111;
	const float EUROS_PER_DOLLAR = 0.86;
	float dollars;

	cout << "Input dollor amount : "; cin >> dollars;

	cout << "Dollars to Yen : " << dollars * YEN_PER_DOLLAR << endl;

	cout << "Dollars to Euros : " << dollars * EUROS_PER_DOLLAR;



	return 0;
}