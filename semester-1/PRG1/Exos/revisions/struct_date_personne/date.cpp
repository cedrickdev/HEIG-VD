//
// Created by asus on 22.12.2024.
//

#include "date.h"
#include<iostream>

void afficher_date(const Date& d){
  std::cout << d.jour << "-" << d.mois << "-" << d.annee;
};

bool est_bessxtile(const Date& d) {
  return d.annee % 400 == 0 or (d.annee % 4 == 0 and d.annee % 100);
};
void modif_date(Date *d){
  d->annee = 2025;
  std::cout << "Date changee : " << d->annee << std::endl;
};
