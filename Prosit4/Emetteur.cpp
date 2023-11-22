#include "Emetteur.h"
#include "Recepteur.h"

typedef void (*evt) (const char*);
evt e;
void Emetteur::EmettreSignal(const char* message)
{
	e = &Recepteur::EcouterSignal;
	e(message);
}
