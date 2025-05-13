#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Pays {
public:
    // Constructeur
    Pays(const string& nom, double population, int superficie);

    // Getter
    string getNom()        const { return nom;}
    double getPopulation() const { return population;}
    int getSuperficie()    const { return superficie;}

    // Setter
    void setPopulation(double population);
    void setSuperficie(int superficie);

    //Autres
    double calcule_densite_population() const;

private:
    string nom;
    double population;
    int superficie;
};


int main() {

    // Creation d'un objet v_pays de la class Pays
    const vector<Pays> v_pays{
    Pays("Suisse", 8.121830, 41290),
    Pays("France", 66.663766, 547030),
    Pays("Italie", 61.855120, 301230),
    Pays("Allemagne", 80.854408, 357021)
    };

    /* pour initialiser des indices afin de suivre les pays ayant la population la plus élevée, la plus grande superficie (aire)
       et la densité de population la plus élevée */
    size_t idx_max_population = 0;
    size_t idx_max_superficie = 0;
    size_t idx_max_densite = 0;


    for (size_t i = 0; i < v_pays.size(); ++i) {
        if (v_pays[i].getPopulation() > v_pays[idx_max_population].getPopulation()) {
            idx_max_population = i;
        }

        if (v_pays[i].getSuperficie() > v_pays[idx_max_superficie].getSuperficie()) {
            idx_max_superficie = i;
        }
        if (v_pays[i].calcule_densite_population() > v_pays[idx_max_densite].calcule_densite_population()) {
            idx_max_densite = i;
        }

    };

    cout << "Pays ayant la plus grande superficie                 : " << v_pays[idx_max_superficie].getNom() << endl;
    cout << "Pays ayant le plus d'habitants                       : " << v_pays[idx_max_population].getNom() << endl;
    cout << "Pays ayant la densite de population la plus grande   : " << v_pays[idx_max_densite].getNom() << endl;

    return EXIT_SUCCESS;
}

// Definition des methodes hors de la class
 Pays::Pays(const string& nom, double population, int superficie) : nom(nom), population(population), superficie(superficie){}

 void Pays::setPopulation(double population) {
     this->population = population;
 }

 void Pays::setSuperficie(int superficie) {
     this->superficie = superficie;
 }

 double Pays::calcule_densite_population() const {
     return population * 1E6 / superficie;
 }




