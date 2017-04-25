#include "Telefonszam.h"
#include <iostream>
#include <string>
#include <locale>
#include <fstream>

using namespace std;

Telefonszam::Telefonszam(long long int telefonszam)
{
	setlocale(LC_ALL, "");			// ez be�ll�tja az op.rendszer �ltal haszn�lt
									// nyelvi k�rnyezetet, amit felt�telez�nk, hogy magyar
									// Windows alatt a konzol ablak bet�k�szlet�t �ll�tsa "Lucida Console"-ra!
	std::cout << "Telefonszam=" << telefonszam << std::endl;
	/*fel kell darabolni h�rom r�szre. Orsz�g+Szolg�ltat�+sz�m
	*Alapesetben feltessz�k, hogy az els� k�t sz�mjegy az orsz�g
	* megn�zz�k, hogy h�nyjegy� a sz�m.
	*/
	if (telefonszam / 100000000 == 0)
	{
		std::cout << "vezet�kes:" << std::endl;
		std::cout << "Telefonszam="<<telefonszam << std::endl;
		//06-1- t�pus� sz�mr�l van sz�
		eloHivo = telefonszam / 10000000;
		//ha 10n�l kisebb, akkor 0+elohivo
		std::cout << "el�h�v� :" << eloHivo << std::endl;
		telefonszam = telefonszam % 10000000;
		szolgaltato = telefonszam / 1000000;
		std::cout << "szolg�ltat�:" << szolgaltato << std::endl;
		telefonszam = telefonszam % 1000000;
		std::cout << "Telefonszam=" << telefonszam << std::endl;
		szam = telefonszam;
	}
	else
	{
		std::cout << "mobil" << std::endl;

		std::cout << "Telefonszam=" << telefonszam << std::endl;
		//06-30- t�pus� sz�mr�l van sz�
		eloHivo = telefonszam / 1000000000;
		//ha 10n�l kisebb, akkor 0+elohivo
		std::cout << "el�h�v� :" << eloHivo << std::endl;
		telefonszam = telefonszam % 1000000000;
		std::cout << "Telefonszam=" << telefonszam << std::endl;
		szolgaltato = telefonszam / 10000000;
		std::cout << "szolg�ltat�:" << szolgaltato << std::endl;
		telefonszam = telefonszam % 10000000;
		std::cout << "Telefonszam=" << telefonszam << std::endl;
		szam = telefonszam;
	}
}

