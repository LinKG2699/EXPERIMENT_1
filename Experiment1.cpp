#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double B, S, P, G;
	cout << "Ticket prices" "	box 250" "		Side lines 100" "		Premium 50" "		General Admission 25" << endl;
	cout << "Tickets sold for Box" << endl;
	cin >> B;
	cout << "Tickets sold for Side lines" << endl;
	cin >> S;
	cout << "Tickets sold for Premium" << endl;
	cin >> P;
	cout << "Tickets sold for General Admission" << endl;
	cin >> G;
	cout << "Total sales" << endl;
	cout << "Box  "  <<					B * 250 << endl;
	cout << "sidelines  "<< S * 100 << endl;
	cout << "Premium  " << P * 50 << endl;
	cout << "General admission  " << G * 25 << endl;
	_getch();

	return 0;
}