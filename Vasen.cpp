#include <iostream>
#include <stdlib.h>
#include "Game_over.h"
using namespace std;
void Vasen();
int spider, hyokkays1, hyokkays2, peraantyminen, valinta_ovi, valinta_1, valinta_2, valinta_3;
void Vasen()
{
	cout << "Astut pieneen huoneeseen. Huone nayttaa olevan jonkinlainen varasto.\n"
		<< "Kuulet rapinaa ja tunnet jonkun katsovan sinua. Žkki„ huoneen pime„st„ nurkasta hy”kk„„ j„ttim„inen h„m„h„kki.\n"
		<< "Ehdit juuri vaistaa ja ryntaat ovelle mutta huomaat oven olevan lukossa. Kaannyt ympari ja huomaa hamahakin lahestyvan.\n";
	system("pause");


	cout << "1. Hyokkaat hamahakin kimppuun.\n"
		<< "2. Peraanny takaisinpain.\n";
	cin >> valinta_1;
	cin.ignore();
	if (valinta_1 == 1)
	{
		cout << "1. Lyot metallikappaleella" << endl
			<< "2. Huitaiset soihdulla" << endl;
		cin >> valinta_2;
		cin.ignore();
		if (valinta_2 == 1)
		{
			cout << "Huitaiset hamahakkia metalliputkellasi ja osut kriittisesti sen päähän, tappaen hamahakin iskullasi." << endl;
			cout << "Huokaiset helpotuksesta ja keräät hetken henkeäsi." << endl;
			system("pause");
			cout << "Toivuttuasi järkytyksestä alat miettimään huoneesta poistumista, mutta huomaat oven menneen lukkoon" << endl;
			system("pause");
			system("cls");
			cout << "Onneksi sinulla on viela metalliputki ja saat sen avulla oven jalleen auki." << endl;
		}
		else if (valinta_2 == 2)
		{
			cout << "Hamahakilta lahtee 10 elamaa" << endl;
			system("pause");
			cout << "Hamahakki syttyy tuleen soihtusi voimasta" << endl;
			system("pause");
			cout << "Hamahakki kuolee tulipaloon" << endl;
			system("pause");
			cout << "Hamahakki jatkaa palamista ja muistat olevasi jumissa huoneessa" << endl;
			system("pause");
			cout << "Tukahduttava savu alkaa tayttaa huonetta ja joudut paniikin valtaan" << endl;
			system("pause");
			cout << "Pyorryt savuun" << endl;
			system("pause");
			system("cls");
			cout << "\n\n\n\n\n\n Tulipalo leviaa koko huoneeseen ja palat huoneen mukana" << endl;
			Game_over();
		}
	}
	else if (valinta_1 == 2)
	{

		cout << "Peruuttaessasi tormaat oveen josta saavuit sisaan, ja huomaat kauhuksesi sen menneen lukkoon.\n"
			<< "Hamahakki hyokkaa kimppuusi ja menetat 1/3 elamastasi.\n"
			<< "Alat joutua paniikin valtaan ja yritat kuumeisesti miettia paasisiko huoneesta muuta kautta pois.\n";
		cout << "1. Yrita loytaa katseellasi pakokeino" << endl
			<< "2. Hyokkaa hamahakin kimppuun" << endl;
		cin >> valinta_3;

		if (valinta_3 == 1)
		{
			cout << "Hamahakki hyokkaa ja saat juuri vaistettya niin etta et kuole, mutta menetat puolet jaljella olevista elamistasi.\n";
			system("pause");
			cout << "Maailma alkaa pyoria ja silmissa pimenee.\n";
			system("pause");
			cout << "Sina pyorryt, koska olet peloissasi ja menettanyt liikaa elamaa.\n";
			system("pause");
			system("cls");
			cout << "Hamahakki syo sinut ja kuolet." << endl;
			Game_over();

		}
		else if (valinta_3 == 2)
		{

			cout << "Huitaiset hamahakkia metalliputkellasi ja osut kriittisesti sen päähän, tappaen hamahakin iskullasi." << endl;
			cout << "Huokaiset helpotuksesta ja keräät hetken henkeäsi." << endl;
			system("pause");
			cout << "Toivuttuasi järkytyksestä alat miettimään huoneesta poistumista, mutta kauhuksesi huomaat metalliputken menneen rikki" << endl;
			cout << "Sinulla ei ole enaa mahdollisuutta paeta huoneesta ja jaat sinne kuolemaan" << endl;
			Game_over();
		}
	}

}