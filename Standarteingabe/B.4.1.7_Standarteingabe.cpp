#include<iostream>
#include<string>		//F�r Zeichen
#include<sstream>		//konvertierung Datentypen
using namespace std;
int main(void)
{
	cout << "Bitte geben Sie Ihren (Nach)Namen ein" << endl;		//Konsolenausgabe Frage Vornamen
	string Name;													//Initaialisierung String Name
	cin >> Name;													//speichert eingegebenen Namen im Programm als Variable Name

	cout << "Bitte geben Sie Ihren Vornamen ein" << endl;			//Konsolenausgabe Frage Nachname
	string Vorname;													//Initialisierung Stringvariable Vorname
	cin >> Vorname;													//speichert Nachnamen im Programm als Variable Vorname

	cout << "Bitte geben Sie Ihren Wohnort ein" << endl;			//Konsolenausgabe Frage Wohnort
	string Wohnort;													//Initialisierung String Wohnort
	cin >> Wohnort;													//speichert Wohnort im Programm als Variable Wohnort

	cout << "Bitte geben Sie Ihre Stra\x223 \be ein" << endl;		//Konsolenausgabe Frage Stra�e
	string Stra�e;													//Initialisierung String Stra�e
	cin >> Stra�e;													//speichert Stra�e im Programm als Variable Stra�e

	cout << "Bitte geben Sie Ihre Hausnummer ein" << endl;			//Konsolenausgabe Frage Hausnummer
	int Hausnummer;													//Initailisierung String Hausnummer
	cin >> Hausnummer;												//speichert Hausnummer im Programm als Variable Hausnummer

	cout << "" << endl;
	cout << "" << endl;

	string Ausgabe;													//Variable Ausgabe Initialisiert
	Ausgabe = Vorname + " " + Name;									//In Variable Ausgabe wird Vorname und Nachname hinzugef�gt
	cout << Ausgabe << endl;

	string str_PLZ;													//Variable Stra�e und Postleitzahl zum kombinieren von Wohnort, Stra�e und Hausnummer
	ostringstream wandler1;
	wandler1 << PLZ;
	str_PLZ = wandler1.str();
	Ausgabe = str_PLZ + " " + Wohnort;								//In Variable Ausgabe wird Stra�e und Wohnort hinzugef�gt
	cout << Ausgabe << endl;


}