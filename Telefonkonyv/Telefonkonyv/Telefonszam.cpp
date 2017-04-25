#include "Telefonszam.h"
#include <iostream>
#include <string>
#include <locale>
#include <fstream>

using namespace std;

Telefonszam::Telefonszam(long long int telefonszam)
{
	setlocale(LC_ALL, "");			// ez beállítja az op.rendszer által használt
									// nyelvi környezetet, amit feltételezünk, hogy magyar
									// Windows alatt a konzol ablak betûkészletét állítsa "Lucida Console"-ra!
	std::cout << "Telefonszam=" << telefonszam << std::endl;
	/*fel kell darabolni három részre. Ország+Szolgáltató+szám
	*Alapesetben feltesszük, hogy az elsõ két számjegy az ország
	* megnézzük, hogy hányjegyû a szám.
	*/
	if (telefonszam / 100000000 == 0)
	{
		std::cout << "vezetékes:" << std::endl;
		std::cout << "Telefonszam="<<telefonszam << std::endl;
		//06-1- típusú számról van szó
		eloHivo = telefonszam / 10000000;
		//ha 10nél kisebb, akkor 0+elohivo
		std::cout << "elõhívó :" << eloHivo << std::endl;
		telefonszam = telefonszam % 10000000;
		szolgaltato = telefonszam / 1000000;
		std::cout << "szolgáltató:" << szolgaltato << std::endl;
		telefonszam = telefonszam % 1000000;
		std::cout << "Telefonszam=" << telefonszam << std::endl;
		szam = telefonszam;
	}
	else
	{
		std::cout << "mobil" << std::endl;

		std::cout << "Telefonszam=" << telefonszam << std::endl;
		//06-30- típusú számról van szó
		eloHivo = telefonszam / 1000000000;
		//ha 10nél kisebb, akkor 0+elohivo
		std::cout << "elõhívó :" << eloHivo << std::endl;
		telefonszam = telefonszam % 1000000000;
		std::cout << "Telefonszam=" << telefonszam << std::endl;
		szolgaltato = telefonszam / 10000000;
		std::cout << "szolgáltató:" << szolgaltato << std::endl;
		telefonszam = telefonszam % 10000000;
		std::cout << "Telefonszam=" << telefonszam << std::endl;
		szam = telefonszam;
	}
}

