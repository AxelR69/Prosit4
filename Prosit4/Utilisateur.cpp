#include "Utilisateur.h"

void Utilisateur::sAbonner(int canal)
{
	canaux.push_back(canal);
    cout << "Vous etes abonne";
}

void Utilisateur::seDesabonner(int canal)
{
    auto it = std::find(canaux.begin(), canaux.end(), canal);
    if (it != canaux.end()) {
        canaux.erase(it);
        std::cout << "Utilisateur : Desabonne du canal " << canal << "\n";
    }
    else {
        std::cout << "Utilisateur : Pas abonne au canal " << canal << "\n";
    }
}

void Utilisateur::EcouterDepuisLeDebut()
{
    for (string& message : buffer) {
        cout << "ecrire dans le buffer";
    }
}
