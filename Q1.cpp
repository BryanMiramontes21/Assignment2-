//Question 1
#include <iostream>

using namespace std;

float totalCost()
{
	float total;

	double rent, internet, phones, cable;

	cout << "Enter rent or morgtage payment : ";
	cin >> rent;
	cout << "Enter phone payment :";
	cin >> internet;
	cout << "Enter internet payment :";
	cin >> phones;
	cout << "Enter cable payment :";
	cin >> cable;


	total = rent + internet + phones + cable;



	cout << "The total monthly cost is :" << total << " dollars!\n";

	return total;
}

int main()
{
	float total;
	total = totalCost();

	cout << "The total monthly cost is " << total << endl;

	return 1;
}