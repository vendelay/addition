#include <iostream>
using namespace std;

int main()
{
	float nr1, nr2, nr3;
	cout << "Skriv in ett tal: ";
	cin >> nr1;
	cout << "Skriv in ett tal till: ";
	cin >> nr2;
	cout << "Skriv in ett tal till: ";
	cin >> nr3;
	float sum = nr1 + nr2 + nr3;
	cout << "Talet blir tillsammans: " << sum << endl;
	float average = sum / 3;
	cout << "Average = " << average; 
}