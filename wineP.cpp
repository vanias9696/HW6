#include "wineP.h"

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) :
	PairArrayT(ArrayIntT(yr, y), ArrayIntT(bot, y)), std::string(l), num(y){}

Wine::Wine(const char* l, int y) : PairArrayT(ArrayIntT(y), ArrayIntT(y)), std::string(l), num(0) {}

int			Wine::sum() {return(PairArrayT::second.sum());}

std::string	Wine::label() const {return *this;}

void		Wine::getBottles()
{
	int t = static_cast<int> (PairArrayT::first.size());

	for (int i = num; i < t; ++i)
	{
		std::cout << "Year : ";
		std::cin >> PairArrayT::first[i];
		std::cout << "Number of buttles: ";
		std::cin >> PairArrayT::second[i];
		++num;
	}
}

void		Wine::show()
{
	int t = static_cast<int> (PairArrayT::first.size());

	std::cout << "Wine label: " << static_cast<std::string>(*this) << std::endl;
	for (int i = 0; i < t; ++i)
	{
		std::cout << "Year: "<< PairArrayT::first[i] << ". Number of bottles: " <<
			PairArrayT::second[i] << "." << std::endl;
	}
}
