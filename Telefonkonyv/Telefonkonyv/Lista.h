#include "Contact.h"

#pragma once
class Lista
{
	Contact *Elso;
	Contact *Utolso;
	
public:

	Lista()
	{
		Elso = NULL;
		Utolso = NULL;
	}
	Lista(Contact Uj)
	{
		Elso = new Contact;
		Elso = &Uj;
		Utolso = Elso;
	}
	~Lista()
	{
		while (Elso!=Utolso)
		{
			Contact* kov = Elso;
			delete Elso;
			Elso = kov->kov;
		}
		delete Elso;
	}
	void beszur(Contact& kapcsolat)
	{
		Contact* tmp =&kapcsolat;
		Utolso->kov = tmp;
		Utolso = tmp;
		Utolso->kov = NULL;
	}
	void listaz()
	{
		Contact* i = Elso;
		while (i != Utolso)
			std::cout << i;
	}
};

