#include "Sajat_string.h"



#ifdef SAJAT_STRING


int main(void)
{

	setlocale(LC_ALL, "");
	try
	{
		String alma("Sz�veg");
	}

	catch (...)
	{
		std::cout << "Van baj\n";
	}
	std::cout << "M�k�dik";
	while (true);
}


#endif // SAJAT_STRING
