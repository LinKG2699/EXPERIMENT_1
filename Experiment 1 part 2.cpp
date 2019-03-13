#include <iostream>
#include <conio.h>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	string mystr;
  float Mass=0;
  int Density=0;
  double;

  cout << "Enter Mass: ";
  getline (cin,mystr);
  stringstream(mystr) >> Mass;
  cout << "Enter Density: ";
  getline (cin,mystr);
  stringstream(mystr) >> Density;
  cout << "Total Volume: " << Mass/4*Density <<endl;
  _getch();
  return 0;
}