#include "wineP.h"

Wine::Wine(const char* l, int y, const int yr[], const int bot[])
{
	lab = l;
	num = y;
	pair.first.resize(y);
	pair.second.resize(y);
	for (int i = 0; i < y; ++i)
	{
		pair.first[i] = yr[i];
		pair.second[i] = bot[i];
	}
}

Wine::Wine(const char* l, int y)
{
	num = 0;
	lab = l;
	pair.first.resize(y);
	pair.second.resize(y);
}

int			Wine::sum() {return(pair.second.sum());}

std::string	Wine::label() const {return (lab);}

void		Wine::getBottles()
{
	for (int i = num; i < static_cast<int>(pair.first.size()); ++i)
	{
		std::cout << "Year : ";
		std::cin >> pair.first[i];
		std::cout << "Number of buttles: ";
		std::cin >> pair.second[i];
		++num;
	}
}

void		Wine::show()
{
	std::cout << "Wine label: " << lab << std::endl;
	for (int i = 0; i < static_cast<int>(pair.first.size()); ++i)
	{
		std::cout << "Year: "<< pair.first[i] << ". Number of bottles: " <<
			pair.second[i] << "." << std::endl;
	}
}
