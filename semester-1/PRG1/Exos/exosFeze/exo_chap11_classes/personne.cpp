#include <iostream>

using namespace std;

class Date {
  friend ostream &operator<<(ostream &os, const Date &date);

public:
  Date() : Date(1, 12, 2020) {
  }

  Date(int d, int m, int y) : day(d), month(m), year(y) {
  }

private:
  int day;
  int month;
  int year;
};

class Personne {
  friend ostream &operator<<(ostream &os, const Personne &personne);

public:
  Personne(string nom, const Date &date, int tel): name(nom), birthday(date), phone_number(tel) {
  }

private:
  string name;
  Date birthday;
  int phone_number;
};

ostream &operator<<(ostream &os, const Date &date) {
  return os << date.day << "-" << date.month << "-" << date.year;
};

ostream &operator<<(ostream &os, const Personne &personne) {
  return os << personne.name << "-" << personne.birthday << personne.phone_number;
}


int main() {
  Date today{20, 12, 2024};
  Personne personne("cedrick", today, 445555);

  cout << personne;
}
