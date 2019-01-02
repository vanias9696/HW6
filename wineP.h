#ifndef WINEP_H
#define WINEP_H
#include <valarray>
#include <iostream>

using ArrayIntT = std::valarray<int>;
using PairArrayT = std::pair<ArrayIntT, ArrayIntT>;

class Wine: private PairArrayT, private std::string
{
public:
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);

	void		getBottles();
	void		show();
	std::string	label() const;
	int 		sum();
private:
	std::string lab;
	int			num;
	PairArrayT	pair;


	
};

#endif