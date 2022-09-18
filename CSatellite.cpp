#include "stdafx.h"
#include "CSatellite.h"
#include <iostream>
#include <string>
#include <cmath>

CSatellite::CSatellite(string nom, int masse, int vit)
{
	m_nom = nom;
	m_vit = vit;
	m_masse = masse;
}

void CSatellite::varVitesse(float force, int duree)
{
	m_vit = (force * duree) / m_masse;
}

void CSatellite::affCaract()
{
	cout << "Nom de satellite : " << m_nom << endl;
	cout << "Masse du satellite : " << m_masse << " Kg" << endl;
	cout << "Vitesse du satellite : " << m_vit << " m/s \n" << endl;
}

float CSatellite::energie()
{
	return (m_masse * (pow(m_vit, 2))) / 2; //On peut aussi faire (m_vit * m_vit)
}