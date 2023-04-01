#include <iostream>
using namespace std;

int main()
{
	// Zutaten:
	int zahl1 = 0;
	double zahl2 = 0.0;
	double erg = 0;
	char rechenzeichen = '_';

	// Zubereitung (Algorythmus)
	cout << "Bitte geben Sie erste Zahl ein: " << endl;
	cin >> zahl1;
	cout << "Bitte geben Sie zweite Zahl ein: " << endl;
	cin >> zahl2;

	cout << "Rechenzeichen eingeben: " << endl;
	cin >> rechenzeichen;

	cout << "Zahl1: " << zahl1 << endl;
	cout << "Zahl2: " << zahl2 << endl;
	cout << "Rechenzeichen: " << rechenzeichen << endl;

	switch (rechenzeichen)
	{
	case '+':
		erg = zahl1 + zahl2;
		cout << "Ergebnis: " << erg << endl;
		break;


	case '-':
		erg = zahl1 - zahl2;
		cout << "Ergebnis: " << erg << endl;
		break;

	case '*':
		erg = zahl1 * zahl2;
		cout << "Ergebnis: " << erg << endl;
		break;

	case '/':
		if (zahl2 == 0)
		{
			cout << "Durch Null teilen nur die ..." << endl;
			break;
		}
		else {
			erg = zahl1 / zahl2;
			cout << "Ergebnis: " << erg << endl;
			break;
		}

	default:
		cout << "Du bist zu ..." << endl;
		break;

	}
	cout << "Ende" << endl;


	return 0;
}
