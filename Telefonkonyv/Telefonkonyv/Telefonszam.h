#pragma once
class Telefonszam
{
	int eloHivo;
	int szolgaltato;
	int szam;
public:
	Telefonszam(long long int telefonszam);
	int getElo() { return eloHivo; }
	int getSzolg() { return szolgaltato; }
	int getSzam() { return szam; }
	void setElo(int);
	void setSzolg(int);
	void setSzam(int);
};

