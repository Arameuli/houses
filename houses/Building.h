#pragma once
#include"House.h"
class Building : public House
{
public:
	int quantity, lift;
	Building();
	Building(string address, int flats, int quantity, int lift);
	void printBuilding();
};

