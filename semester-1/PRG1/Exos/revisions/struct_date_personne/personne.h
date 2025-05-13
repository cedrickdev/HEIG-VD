//
// Created by asus on 22.12.2024.
//

#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include "date.h"

struct Personne {
    std::string nom;
    std::string adresse;
    Date anniversaire;
};

 void afficher_personne(const Personne& p);
#endif //PERSONNE_H
