#pragma once
#include <iostream>
using namespace std;
class Recepteur
{
public :
	static void EcouterSignal(const char*);
	float frequence;
	char message;
};

