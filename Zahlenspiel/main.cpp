#include "Game.h"

int main()
{	
	srand(time(NULL));
	Game play;
	
	play.round();


	return 0;
}











/*
#include <iostream>//für Streams
#include <stdlib.h>//für Zufallsgenerator
#include <time.h>//für Zeit in Zufallsgenerator

//Buchstaben abfangen/Schwachsinn

//alles auf Englisch

using namespace std;
	//1. zieht eine Zahl aus Random und gibt sie weiter an das Spiel.
	//2. Das Spiel sieht die Zahl und gibt dem Spieler bereit dass er anfangen soll zu raten.
	//3. Der Spieler zieht eine Zahl und gibt sie dem Spiel
	//4. Das Spiel zählt mit wie oft der Spieler eine Zahl zieht. Er vergleicht mit dem System
	//5. Das spiel gibt aus ob ein Treffer gelandet wurde. Wenn nicht gibt er dem Spieler bescheid dass dieser eine Zahl größer oder kleiner raten soll


class cSystem //"System", dass ein Zahl zufällig generiert und an die Klasse Spiel weitergibt.
{
	int Zahl1;//z.B. Zufallszahl

public:
	cSystem(int Zahl1_in=-1){
		Zahl1=Zahl1_in;	
	}
	~cSystem(){}

	void erstell_Z1()
	{
		Zahl1=rand()%101;
	} //private (kapselung nach außen)

	int get_Z1()
	{
		if(Zahl1==-1)
			erstell_Z1(); 
		return Zahl1;
	}

	void reset_Z1()
	{
		Zahl1=-1;
	}
};

class cSpieler //"Spieler", der Zahlen erraten kann
{
	
	int Zahl2; //unabhängig von Zahl1; geratene Zahl; Benennen nach Semantischem Wert
public:

	cSpieler()
	{
		Zahl2=0;
	}
	cSpieler(int Zahl2_in=0){ //Sinnvoller Defaultwert? Wenn nein, braucht man keine Vorgabewerte/initialisierung
		Zahl2=Zahl2_in;
	}
	~cSpieler(){};

	void set_Z2()
	{
		cout << "Bitte geben Sie eine Zahl ein: " << endl;
		cin >> Zahl2;
	}

	int get_Z2()
	{
		return Zahl2;
	}
};

class cSpiel: public cSystem,public cSpieler /*Klasse Spiel, vergleicht Eingabe Spieler mit der Zahl dass das System vorgibt
gibt die Anzahl der Versuche bis zum Treffer zurück*//*
{//!Vererbung raus!
	int versuch_act;
public:
	cSpiel(int versuch_act_in=1)
	{
		versuch_act=versuch_act_in;
	}
	
	void vergleich_Z1uZ2()//name!
	{
		get_Z1();
		cout << "Das System hat eine neue Zahl generiert." << endl;
		int versuch=0;

		do
		{
			set_Z2();
			versuch=versuch+1;
			
			if(get_Z2()!=get_Z1())
			{	
				if(get_Z2()<get_Z1())
				{
					cout << "Sie waren zu niedrig, nocheinmal bitte." << endl << endl;
				}
				else if(get_Z2()>get_Z1())
				{
					cout << "Sie waren zu hoch, versuchen Sie es erneut. " << endl << endl;
				}
				else{
					cout << "Sie haben gewonnen!" << endl;		
				}
			}
			else
			{
				cout << "Sie haben gewonnen, 1. Versuch!"<< endl;
			}
		}while(get_Z2()!=get_Z1());

		versuch_act=versuch;
		versuch=0;
	}

	int get_versuch()
	{
		return versuch_act;
	}
};


int main() //main so kurz wie möglich
{	
	srand(time(NULL));
	int ary[3]={0,0,0}; //Array aus int-werten das später mit den Feldern arbeiten kann
	cSpiel in; //Objekt des Typs Spiel

	for(int i=0;i<3;i++) //Zur Vorgabe der Spielrunden	//in eigene Klasse
	{	
		cout << "=======================" << endl; //Optische Trennung im laufenden Programm
		in.reset_Z1(); // Bei jeder neuen Runde wird eine neue Zahl generiert statt die alte der vorigen Runde zu nehmen
		in.vergleich_Z1uZ2();
		ary[i]=in.get_versuch(); //Zuweisung der Versuchszahlen pro Runde an das jeweilige Arrayfeld
		cout << "=======================" << endl;
		cout << endl;

	}
	// Berechnung des Mittelwerts:
	double erg;
	int int_erg;
	erg=((ary[0]+ary[1]+ary[2])/3.0)+0.5;
	int_erg=erg;
	cout << "Der Mittelwert betraegt " << int_erg << " Versuche" << endl;

	//Vergleich mit der Statistik:
	if(int_erg<21)// Statistik ist laut Frank 7 Versuche pro Spiel
	{
		cout <<endl << "Herzlichen Glueckwunsch! Sie sind besser als der Durchschnitt. Sie haben eine Belohnung gewonnen. Bitte bei Frank abholen." << endl << endl;
	}

	return 0;
}//Anderer Lösungsansatz: cSystem: if(-1) weg, stattdessen in main in for() erstell_Z1() einfügen

*/
/*
Probleme:

- srand erstellt eine Zahl nach hinaufzählen. Somit ist es bei einem neuen Spiel leicht abschätzbar in welchem Bereich sich die Zahl genau befindet.

- (Die erstellte Zahl von get_Z1 ist noch vorhanden nach dem erneuten Spielbeginn. Sie muss erst resettet werden.)
*/

//Nacharbeitung:  
//Vererbung rausnehmen, aggregation/komposition
//nur notwendiges ist öffentlich
//benennungen semantisch anpassen
//englisch
//main in Klassen verpacken (Runde, Mittelwert etc.)

/*
Nächste Aufg.

TicTactoe

2 Menschliche Spieler
 Jeder ein zug, abwechselnd
 grafische oberfläche _|_|_
					  _|_|_
					   | |
	später schlauer computer, der geschickt zieht
	o kann z.B. nicht mehr gewinnen... (x in der mitte)

bitbucket/github konto, material dort einchecken
Zahlenspiel hochladen

*/