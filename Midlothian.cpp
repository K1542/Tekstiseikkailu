#include <iostream>
#include <stdlib.h>
#include "Game_over.h"
#include "Vasen.h"
#include "Loppu.h"
#include "Punainen_ovi.h"
#include "struct_pelaaja.h"
using namespace std;
void JyhkeatOvet();
void seurusteluvasen();

int main(void)

{
	PELAAJA pelihahmo;
	int valinta1, valinta2, valinta3, valinta4, valinta_vasen;
	int huone_kk, makuuhuone, keittio;
	int variovi, aula, seurusteluhuone, sotahuone, tiili;
	int avain, mahd_loppu, puukko;
	int aika = 360;
	//ALOITUS
	
   cout << "|=================================|" << endl
		<< "|Tervetuloa Midlothianin pariin!  |" << endl
		<< "|=================================|" << endl
		<< "Aloita kertomalla nimesi ja valmistaudu seikkailuun: ";
		cin.getline(pelihahmo.nimi, 30);
		cout << "Nimesi on   " << pelihahmo.nimi << endl;		// Aliohjelmassa
		system("pause");
		system("cls");
		cout << "Syv?ll? mets?n siimeksess? sijaitsee ikivanha linna,\n jossa ei ole ollut asutusta vuosikymmeniin.\n"
			<< "" << pelihahmo.nimi << " her?? h?m?r?st? ja kosteasta tyrm?st?.\n"
			<< "H?n ei tied? mit? on tapahtunut tai kuinka on tyrm??n joutunut." << endl
			<< "Viimeisin muistikuva on siit?, kun h?n oli tulossa my?h??n illalla t?ist? kotiin." << endl
			<< pelihahmo.nimi << " huomaa k?dess??n paperilapun, jossa lukee:'Sinulla on 6 tuntia aikaa l?yt?? tiesi ulos linnasta tai kohtalosi on sinet?ity.'";
		system("pause");
		cout << "H?n nousee yl?s ja katsoo ymp?rilleen. Huoneessa ei ole juuri mit??n.\n";
		
		//ENSIMMŽINEN VALINTA

		do
		{
			cout << "1. Kokeilet tyrm?n ovea.\n"
				<< "2. Katsot s?ngyn alle.\n"
				<< "3. Tutkit kolon, jonka huomasit tyrm?n sein?ss?.\n";
			cin >> valinta1;


			if (valinta1 == 1)
			{
				cout << "Tyrm„n ovi on lukossa" << endl;
				aika = aika - 5;
			}
			// ESINEET TAULUKKOON, JONKA VOI TULOSTAA/LISTATA..??
			else if (valinta1 == 2)
			{
				cout << "L”yd„t s„ngyn alta metallikappaleen" << endl;
				aika = aika - 5;
			}

			else if (valinta1 == 3)
			{
				cout << "Kolossa ei ole muuta kuin h„m„h„kinseitti„" << endl;
				aika = aika - 5;
			}
		} while (valinta1 != 2);
		

			do
			{
				cout << "1. Kokeilet metalliputkea oveen" << endl
					<< "2. Tutkit kolon, jonka huomasit tyrm„n sein„ss„" << endl;
				cin >> valinta2;

				if (valinta2 == 2)
				{
					cout << "Kolossa on vain h„m„h„kinseitti„" << endl;
					aika = aika - 5;
				}
			} while (valinta2 != 1);
		//TOINEN VALINTA
		system("pause");
		system("cls");
			cout << " " << pelihahmo.nimi << " sai oven murrettua metalliputkella ja p„„si ulos tyrm„st„. Sinulla on kaksi vaihtoehtoa:" << endl;
			cout << "1. Mene oikealle" << endl
				<< "2. Mene vasemmalle" << endl;
			cin >> valinta3;
			cin.ignore();
			if (valinta3 == 2)
			{
				do
				{
				
			cout << " " << pelihahmo.nimi << "Huomaa kaytavan paassa vankan nakoisen metallioven. Oveen on piirretty paakallon kuva." << endl
					<< "Haluatko menna sisaan vai kaantya takaisin" << endl
					<< "1.Sisaan." << endl
					<< "2. Takaisin." << endl;
				cin >> valinta_vasen;
				if (valinta_vasen == 1)
				{
					Vasen();
				}
			}while (valinta_vasen != 2);
			};
			cout << " " << pelihahmo.nimi << " Kavelee hetken aikaa oikealle kaytavalla ja huomaa soihdun seinalla." << endl;
			aika = aika - 20;
			cout << " " << pelihahmo.nimi << " Ottaa soihdun ja sytyttaa sen taskustaan loytyneella sytkarilla." << endl;
			aika = aika - 5;
			cout << " " << pelihahmo.nimi << " Jatkaa matkaa kaytavaa pitkin." << endl;
			cout << "Kaveltyaan ikuisuudelta tuntuvan ajan " << " " << pelihahmo.nimi << " saapuu risteykseen." << endl;
				aika = aika - 30;
			cout << "Vasemmalla on kiviportaat jotka vievat ylospain ja edessasi on puinen ovi" << endl
			<< "Kumman valitset?" << endl;
		cout << "1. Kiviportaat" << endl
			<< "2. Puinen ovi" << endl;
		cin >> valinta4;
		system("cls");
		if (valinta4 == 2)
		
		do
		{
			cout << "Olet pimeassa kylmakomerossa." << endl;
				aika = aika - 5;
				cout << "1. Palaa kaytavalle ja mene kiviportaita ylos." << endl
				<< "2. Tutkaile kylmakomeroa." << endl;
			cin >> valinta4;

			if (valinta4 == 2)
			{
				do
				{
					cout << "Valaiset soihdullasi komeroa ja huomaat siella laatikoita ja kierreportaat." << endl;
					aika = aika - 5;
					cout << "1. Tutki laatikoita." << endl
						<< "2. Mene kierreportaita ylos." << endl
						<< "3. Palaa takaisin." << endl;
					cin >> huone_kk;
					if (huone_kk == 1)
					{
						cout << "Et loyda mitaan laatikoista." << endl;
						aika = aika - 10;
					}
					else if (huone_kk == 2)
					{
						cout << "Kavelet kierreportaita ylos ja saavut metallisen oven luokse. Ovi on lukossa. Joudut pettyneena palaamaan alas portaita" << endl
							<< "Kavellessasi alas portaita kompastut ja menetat aikaasi ja elamaasi." << endl;
						aika = aika - 20;
						pelihahmo.hp = pelihahmo.hp - 5;
					}
				} while (huone_kk != 3);
			}
		} while (valinta4 != 1);
		system("cls");
		cout << " " << pelihahmo.nimi << " alkaa kavelemaan portaita ylospain. Portaiden ylapaassa hanta odottaa tavallisen nakoinen ovi." << endl;
		aika = aika - 2;
		cout << "Oveen on naulattu kiinni lappu jossa sanotaan: 'Ken vaaran varin tietaa, se tiettya ovea valttaa'" << endl
			<< " " << pelihahmo.nimi <<" aukaisee oven ja astuu sisaan. Paadyt kaytavaan jonka varrella on muutamia ovia." << endl;
		cout << " " << pelihahmo.nimi << " lahtee kavelemaan kaytavaa pitkin ja kokeilee ovia. Ovista nelja aukeaa." << endl;
		aika = aika - 10;
		do
		{
			cout << "Sinun on valittava oikea ovi, jotta voit jatkaa matkaasi. Vaihtoehtosi ovat: " << endl
				<< " 1. Keltainen ovi" << endl
				<< " 2. Punainen ovi" << endl
				<< " 3. Raskas ovi" << endl
				<< " 4. Vihrea ovi" << endl;
			cin >> variovi;
			if (variovi == 2)
			{
				{
					Punainen_ovi();
				}
			}
			
			if (variovi == 1)
			{
				do
				{
				
				cout << "Paadyt makuuhuoneeseen." << endl;
				aika = aika - 5;
				cout << "1. Tutki vaatekaappi." << endl
					<< "2. Katso arkkuun." << endl
					<< "3. Palaa takaisin" << endl;
				cin >> makuuhuone;
				if (makuuhuone == 1)
				{
					cout << "Vaatekaapista ei loytynyt mitaan" << endl;
					aika = aika - 5;
				}
				else if (makuuhuone == 2)
				{
					cout << "Loysit arkusta pienen repun." << endl;
					aika = aika - 5;
				}
			}while (makuuhuone != 3);
				} 

			
			if (variovi == 3)
			{
				do
				{
					cout << "Saavut keittioon." << endl;
					aika = aika - 5;
					cout << " 1. Tutki kaapit." << endl
						<< " 2. Mene portaita alas." << endl
						<< " 3. Katso komeroon." << endl
						<< " 4. palaa takaisin kaytavalle." << endl;
					cin >> keittio;
					if (keittio == 1)
					{
						cout << "Tutkit keittion kaapit ja loydat itsellesi uuden aseen! Se on pieni mutta terava puukko." << endl;
						aika = aika - 5;
						cin >> puukko;
					}
					else if (keittio == 2)
					{
						cout << "Kohtaat oven joka on teljetty kiinni. Avaat oven ja paadyt kylmakomeroon. Siella ei ole mitaan ja palaat takaisin keittioon." 
							<< endl;
						aika = aika - 5;
					}
					else if (keittio == 3)
					{
						cout << "Loydat komerosta ruokaa jonka syot nalissasi. Saat taydet elamat ja liikut nyt nopeampaa." << endl;
						aika = aika - 10;
						pelihahmo.hp = pelihahmo.maxhp;
						

					}
				} while (keittio != 4);
			}
		} while (variovi != 4);
		system("cls");
		system("pause");
		cout << " " << pelihahmo.nimi << ":lla on nyt: " << pelihahmo.hp << " elamaa." << " ja " << aika / 60 << " tuntia jaljella." << endl;
		system("pause");
		system("cls");
		cout << " " << pelihahmo.nimi << " paasee linnan aulaan, jossa han huomaa suuret ja vankat paaovet." << endl;
		cout << " " << pelihahmo.nimi << " kavelee paaovien luokse ja kokeilee niita vain huomatakseen niiden olevan lukossa." << endl;
		system("pause");
		cout << "'Se olisikin ollut liian helppoa' ajattelet ja huomaat lapun jossa on arvoitus: " << endl;
		system("pause");
		cout << "'Paikan loydat avaimen, kun keksit tahan vastauksen: Kaksi keskella juoksee, kaksitoista ymparilla seisoo.'" << endl;
		system("pause");
		system("cls");
		cout << " " << pelihahmo.nimi << " ottaa lapun mukaansa ja lahtee etsimaan avainta." << endl;
		aika = aika - 5;
		cout << " " << pelihahmo.nimi << " tutkii aulaa katseellaan ja huomaat paksun polykerroksen peittavan kaikkea." << endl;
		cout << "Aulasta johtaa leveat kiviportaat ja suuret, jyhkeat puuovet muualle linnaan. Kumpaan suuntaan lahdet? " << endl;
		cout << "1. Portaita pitkin." << endl
			<< "2. Jyhkeiden puuovien kautta." << endl;
		cin >> aula;
		if (aula == 2)
		{
			JyhkeatOvet();
			aika = aika - 10;
		}
		cout << " " << pelihahmo.nimi << " paatyy seurusteluhuoneeseen, jossa huonekaluja peittaa valkoiset lakanat ja hamahakinseitit." << endl
			<< " " << pelihahmo.nimi << " kavelee ympari huonetta ja etsii avainta." << endl
			<< " " << pelihahmo.nimi << " katsoo lakanoiden alle ja lipastoihin, mutta ei loyda avainta mistaan." << endl
			<< "Huoneen peralla on kaksi ovea, joista voit jatkaa matkaa. Kumman valitset?" << endl;
		cout << "1. Oikeanpuoleisen oven." << endl
			<< "2. Vasemmanpuoleisen oven." << endl;
		cin >> seurusteluhuone;
		if (seurusteluhuone == 1)
		{
			seurusteluvasen();
		}
		do
		{
			cout << " " << pelihahmo.nimi << "Loytaa itsensa strategiahuoneesta. Keskella huonetta on jyhkea puupoyta, jonka paalla on strateginen kartta taynna merkintoja." << endl
				<< "Yhdelle seinista roikkuu seinavaate, johon on kirjailtu kellotaulu. Alat tutkia huonetta: " << endl;
			cout << "1. Tutki puupoytaa. " << endl
				<< "2. Tutki seinavaatetta. " << endl
				<< "3. Mene takaisin aulaan. " << endl;
			cin >> sotahuone;
			aika = aika - 10;
			if (sotahuone == 1)
			{
				cout << " " << pelihahmo.nimi << "Tutkiu strategiapoytaa johon on jaanyt nappulat paikalleen. Siirtelet paria nappulaa ja huomaat kartan kuvastavan Skotlantia." << endl
					<< "Nayttaa silta kuin linnassa olisi suunniteltu hyokkaysta Irlantiin." << endl
					<< "Et kuitenkaan loyda poydalta mitaan mika auttaisi sinua." << endl;
				aika = aika - 30;
			}
			else if (sotahuone == 2)
			{
				cout << " " << pelihahmo.nimi << " tutkailee seinavaatetta ja huomaa sen takana seinassa omituisen nakoisen tiilen." << endl
					<< "1. Tutki tiilta." << endl;
				cin >> tiili;
				cout << "Kokeilet tiilta ja huomaat sen liikkuvan. Irroitat sen ja laitat katesi siita jaaneeseen koloon." << endl
					<< "Tunnet siella jotain kylmaa ja rautaista" << endl
					<< "'Sehan on avain!' huudahdat aaneen." << endl
					<< "1. Laita avain taskuusi" << endl;
					cin >> avain;
					
				cout << "'Taman on pakko olla se avain jota etsinkin' mietit itseksesi." << endl
					<< "Palaat takaisin aulaan." << endl;
				aika = aika - 20;
			}
		} while (sotahuone != 3);
		system("cls");
		if (avain == 1)
		{
			cout << " " << pelihahmo.nimi << " on taas paa-aulassa, talla kertaa avain mukananaan." << endl;
			cout << "Voit menna kokeilemaan avainta paaoviin tai tutkia linnaa viela lisaa: " << endl
				<< "1. Mene paaoville." << endl
				<< "2. Mene jyhkeista puuovista tutkimaan." << endl;
			cin >> mahd_loppu;
			if (mahd_loppu == 1)
			{
				Loppu();
				cout << "Sinulle jai aikaa: " << aika / 60 << " tuntia" << endl;
			}
		}
		else if (avain != 1)
		{
			cout << "Et ole loytanyt avainta mistaan ja aikasi hupenee loppuun." << endl;
			Game_over;
		}
		else if (mahd_loppu == 2)
		{
			JyhkeatOvet();
		}
		else if (aika <= 0)
		{
			cout << "Aikasi loppui kesken etka paase pois linnasta. Jaat sinne ikuisuksi ajoiksi jumiin." << endl;
		}

	return 0;
}
//Ei tarvetta tehd„ erilliseen cpp tiedostoon koska niin lyhyit„ ja tulevat mahdollisesti vain kerran
void JyhkeatOvet(void)
{
	cout << "Sinulla ei ole avainta naihin oviin joten et saa niita auki.\n" << endl;
	cout << "Joudut pakosta menemaan portaita pitkin ylos." << endl << system("pause");
	system("cls");
}
void seurusteluvasen(void)
{
	cout << "Oven takana on suurikokoinen makuuhuone. Huomaat huoneessa leijailevan sielun, joka mutisee sanoja kielella jota et ymmarra." << endl
		<< "Joudut pakokauhun valtaan ja lahdet pois ja siirryt toiselle ovelle." << endl;
	system("pause");
	system("cls");
}