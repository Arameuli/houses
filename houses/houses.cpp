#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include"House.h"
#include"Building.h"
#include"Private.h"
using namespace std;
int main()
{
	ofstream fout("private.txt");
	vector<Building> a;
	Building t;
	Private z;
	cin >> z.address >> z.flats >> z.rooms >> z.garden;
		fout << z.address << " " << z.flats << " "
			<< z.rooms << " " << z.garden << endl;

	while (cin >> t.address >> t.flats >> t.quantity >> t.lift)
			a.push_back(t);

	for (int i = 0; i < a.size(); i++)
		a[i].printBuilding();
}

