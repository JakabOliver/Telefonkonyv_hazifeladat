#include "Contact.h"



Contact::Contact()
{
	kov = NULL;
}


Contact::Contact(String VezNev, String kerNev, String becNev, String lakCim, Telefonszam mobSzam, Telefonszam priSzam)
{
	kov = NULL;
}

Contact::Contact(const Contact & kapcsolat)
{
	kov = NULL;
}

Contact::~Contact()
{
}

void Contact::operator=(Contact & kapcsolat)
{
}

String Contact::getvNev()
{
	return String();
}

String Contact::getkNev()
{
	return String();
}

String Contact::getbNev()
{
	return String();
}

String Contact::getCim()
{
	return String();
}

Telefonszam Contact::getmSzam()
{
	return Telefonszam();
}

Telefonszam Contact::getpSzam()
{
	return Telefonszam();
}

void Contact::setvNev(String vezNev)
{
}

void Contact::setkNev(String kerNev)
{
}

void Contact::setbNev(String becNev)
{
}

void Contact::setCim(String lakCim)
{
}

void Contact::setmSzam(Telefonszam mobSzam)
{
}

void Contact::setpSzam(Telefonszam priSzam)
{
}

std::ostream & kiir(std::ostream & os, Contact kapcsolat)
{
	// TODO: insert return statement here
}
