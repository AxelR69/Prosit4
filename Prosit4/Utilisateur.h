#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Utilisateur
{
private :
	vector <int> canaux;
	vector <string> buffer;
public :
	void sAbonner(int);
	void seDesabonner(int);
	void EcouterDepuisLeDebut();
};

