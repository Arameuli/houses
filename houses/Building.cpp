#include "Building.h"
#include<iostream>
#include<fstream>
ofstream foutt("public.txt");
Building :: Building() {
}
Building :: Building(string address, int flats, int quantity, int lift) {
	this->address = address;
	this->flats = flats;
	this->quantity = quantity;
	this->lift = lift;
}
void Building::printBuilding() {
	foutt << address << " " << flats << " " << quantity << " " << lift << endl;
}