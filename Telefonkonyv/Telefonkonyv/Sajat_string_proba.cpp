#include "Sajat_string.h"



#define SAJAT_STRING
#ifdef SAJAT_STRING


int main(void)
{

	setlocale(LC_ALL, "");
	try
	{
		String Alma("Korte");
		std::cout << Alma << std::endl;
		String betu("a");
		std::cout << betu << std::endl;
		String Korte("répa");
		Korte= Alma;
		std::cout << Korte << std::endl;
		Korte = Alma + betu;
		std::cout << Alma + betu;
		std::cout << Alma << std::endl;
		Alma + 'k';
		std::cout << Alma + 'k';
	}

	catch (...)
	{
		std::cout << "Van baj\n";
	}
	std::cout << "Mûködik";
	while (true);
}


#endif // SAJAT_STRING
