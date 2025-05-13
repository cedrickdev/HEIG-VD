//
// Created by asus on 22.12.2024.
//

#ifndef DATE_H
#define DATE_H
#include <cstdint>

using Jour = uint16_t;
using Mois = uint8_t;
using Annee = int16_t;

struct Date {
 Jour jour;
 Mois mois;
 Annee annee;
};

 void afficher_date(const Date& d);
 bool est_bessextile(const Date& d);
 int modif_date(Date d);

#endif //DATE_H
