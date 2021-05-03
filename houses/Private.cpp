#include "Private.h"
#include<fstream>
#include<iostream>

Private :: Private() {
}
Private :: Private(string address, int flats, int rooms, int garden) {
	this->address = address;
	this->flats = flats;
	this->rooms = rooms;
	this->garden = garden;
}
