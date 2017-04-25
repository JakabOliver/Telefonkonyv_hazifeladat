#include "Sajat_string.h"
#include <string.h>

String::String(char betu) {
	len = 1;
	pData = new char[len + 1];
	pData[0] = betu;
	pData[1] = '\0';
}

String::String(const char* p)
{
	len = strlen(p);			// Meghatározzuk a hosszát
	pData = new char[len+1];		// Helyet foglalunk
	strcpy(pData,p);
}

String::String(const String& szo)
{
	len = szo.getHossz();						// Meghatározzuk a hosszát
	pData = new char[len+1];						//helyet foglalunk
	strcpy(pData, szo.pData);
}


char& String::operator[] (unsigned int i)
{
	if (i >= len)		throw "túl indexelés";
	else				return pData[i];
}
char& String::operator[]  (unsigned int i) const
{
	if (i >= len)		throw "túl indexelés";
	else				return pData[i];
}

String String::operator+ (const String szo) const
{
	String temp;		
	temp.len = len + szo.len;
	delete[] temp.pData;
	temp.pData = new char[temp.len + 1];
	strcpy(temp.pData, pData);
	strcat(temp.pData, szo.pData);
	return temp;
}

String& String::operator= (const String szo)
{
	if (this!=&szo)
	{
		delete[] pData;
		len= szo.len;
		pData = new char[len + 1];
		strcpy(pData, szo.pData);
	}
	return *this;
}


std::ostream& operator<<(std::ostream& os, String szo)
{
	os << szo.adat();
	return os;
}

std::istream& operator>>(std::istream& is, String& szo)
{
	char b;
	while (is >> b)
	{
		szo += b;
	}
	return is;
}