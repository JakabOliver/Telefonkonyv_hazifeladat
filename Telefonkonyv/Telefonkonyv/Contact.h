#include "Sajat_string.h"
#include "Telefonszam.h"
#pragma once

class Contact
{
	String vNev;
	String kNev;
	String bNev;
	String Cim;
	Telefonszam mSzam;
	Telefonszam pSzam;
public:
	Contact *kov;
	Contact();
	Contact(String vezNev, String kerNev, String becNev, String lakCim, Telefonszam mobSzam, Telefonszam priSzam);
	Contact(const Contact& kapcsolat);
	~Contact();
	void operator=(Contact& kapcsolat);
	void operator=(const Contact& kapcsolat);
	String getvNev();
	String getkNev();
	String getbNev();
	String getCim();
	Telefonszam getmSzam();
	Telefonszam getpSzam();
	void setvNev(String vezNev);
	void setkNev(String kerNev);
	void setbNev(String becNev);
	void setCim(String lakCim);
	void setmSzam(Telefonszam mobSzam);
	void setpSzam(Telefonszam priSzam);

};

std::ostream& kiir(std::ostream& os, Contact kapcsolat);
