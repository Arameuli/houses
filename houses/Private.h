#pragma once
#include"House.h"
class Private : public House
{
public:
	int rooms, garden;
	Private();
	Private(string address, int flats, int rooms, int garden);
};

