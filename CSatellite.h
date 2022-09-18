#pragma once
#include <iostream>
#include <string>

using namespace std;

class CSatellite
{
public:
	CSatellite(string nom, int masse, int vit);

	void varVitesse(float force, int duree);

	void affCaract();

	float energie();

private:
	string m_nom;
	int m_vit;
	int m_masse;
};

