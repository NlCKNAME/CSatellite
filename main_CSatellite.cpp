#include "stdafx.h"
#include "CSatellite.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	CSatellite SPOUTNIK("SPOUTNIK", 700, 8000);

	SPOUTNIK.affCaract();

	SPOUTNIK.varVitesse(1000, 20);

	SPOUTNIK.affCaract();

	cout << "L'energie cinetique du satellite est de : " << SPOUTNIK.energie() << " Joules." << endl;
}