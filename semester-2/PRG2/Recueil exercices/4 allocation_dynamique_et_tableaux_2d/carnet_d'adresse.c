#include<stdio.h>
#include<stdlib.h>

#define SIZE 3
#define LNAME_SIZE 20
#define FNAME_SIZE 20

/**
 * @brief Écrire un programme qui gère un carnet d'adresses simple.
 * Utilisez une structure pour représenter un contact
 * (nom, prénom, numéro de téléphone) et un tableau dynamique pour stocker ces contacts.
 * Le programme doit permettre d'ajouter, d'afficher et de rechercher des contacts.
 */

struct Contact {
    char nom[LNAME_SIZE];
    char prenom[FNAME_SIZE];
    unsigned tel;
};


void add_contact(struct Contact *contact, const char *nom, const char *prenom, int tel) {
    int i = 0;
    int index= 0;

    while (nom[i] != '\0' && i < LNAME_SIZE - 1) {
        contact[index].nom[i] = nom[i];
        i++;
    }
    contact[index].nom[i] = '\0';

  i = 0;
    while (prenom[i] != '\0' && i < FNAME_SIZE - 1) {
        contact[index].prenom[i] = prenom[i];
        i++;
    }

    contact[index].prenom[i] = '\0';

    contact[index].tel = tel;
}


void display_contact(struct Contact *contact, int size) {
    for (size_t i = 0; i <= size; ++i) {
        printf("%s %s %d", contact[i].nom, contact[i].prenom, contact[i].tel);
    }
    printf("\n");
}

int main() {
    struct Contact *contact;


    contact = (struct Contact *) malloc(SIZE * sizeof(contact));
    if (contact == NULL) {
        printf("Allocation error");
        return 1;
    }

    // Saisie des informations pour chaque contact

        char nom[LNAME_SIZE], prenom[FNAME_SIZE];
        int tel;

        printf("Entrez le nom du contact : ");
        scanf("%s", nom);  // Lire le nom

        printf("Entrez le prénom du contact : ");
        scanf("%s", prenom);  // Lire le prénom

        printf("Entrez le numéro de téléphone du contact : ");
        scanf("%d", &tel);  // Lire le numéro de téléphone

        // Ajouter le contact dans le tableau
        add_contact(contact, nom, prenom, tel);



    // Afficher tous les contacts
    printf("\nCarnet d'adresses:\n");
    display_contact(contact, SIZE);

    // Libérer la mémoire allouée
    free(contact);


    return 0;
}
