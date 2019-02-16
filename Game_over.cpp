#include <iostream>
#include <stdlib.h>
using namespace std; 
void Game_over();

void Game_over()
{
	cout << "************************************\n"
		<< "*                                  *\n"
		<< "*             GAME OVER            *\n"
		<< "*                                  *\n"
		<< "************************************\n";
	exit(0);
}