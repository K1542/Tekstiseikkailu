#include <iostream>
#include "Game_over.h"
using namespace std;
void Punainen_ovi(void)
{
	cout << "Avaat punaisen oven aistit valittomasti vaaran ilmassa. Ennen kuin ehdit peraantya, jokin hyokkaa kimppuusi ja kuolet."
		<< endl;
	system("pause");
	Game_over();

}