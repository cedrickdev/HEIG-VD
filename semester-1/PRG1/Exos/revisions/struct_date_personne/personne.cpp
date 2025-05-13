//
// Created by asus on 22.12.2024.
//

#include <iostream>
#include "personne.h"
#include "date.h"

void afficher_personne(const Personne& p){
  std::cout <<  "Nom               : " << p.nom << std::endl
            <<  "Adresse           : " << p.adresse << std::endl
            <<  "Anniversaire      : ";
            afficher_date(p.anniversaire);
};


