//
// Created by asus on 22.12.2024.
//

#ifndef DATE_H
#define DATE_H
#include <cstdint>
#include <string>

#define MAX_SIZE 3

using Jour = uint16_t;
using Mois = uint16_t;
using Annee = uint16_t;



struct Date {
 Jour jour;
 Mois mois;
 Annee annee;
};

enum my_enum {
  madate = 2026,
  monage = 23,
  sex = 'M'
};

 struct Persons {
  std::string Pname;
  int age;
 };

 void afficher_date(const Date& d);
 bool est_bessxtile(const Date& d);
void modif_date(Date *d);

#endif //DATE_H
