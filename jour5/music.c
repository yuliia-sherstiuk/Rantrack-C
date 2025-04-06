#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Définir une structure pour stocker les données d'une chanson
typedef struct Chanson {
    char *artiste;
    char *titre;
    int annee;
    struct Chanson *suivant;
} Chanson;

// Fonction pour créer une nouvelle chanson
Chanson* creer_chanson(char *artiste, char *titre, int annee) {
    Chanson *nouvelle = malloc(sizeof(Chanson));
    if (!nouvelle) return NULL;

    nouvelle->artiste = strdup(artiste);
    nouvelle->titre = strdup(titre);
    nouvelle->annee = annee;
    nouvelle->suivant = NULL;

    return nouvelle;
}

// Ajouter une chanson à la fin de la liste
void ajouter_chanson(Chanson **tete, Chanson *nouvelle) {
    if (*tete == NULL) {
        *tete = nouvelle;
    } else {
        Chanson *courant = *tete;
        while (courant->suivant) {
            courant = courant->suivant;
        }
        courant->suivant = nouvelle;
    }
}

// Fonction pour lire le fichier et créer la liste chaînée
Chanson* lire_fichier(const char *nom) {
    FILE *fichier = fopen(nom, "r");
    if (!fichier) {
        printf("File not found.\n");
        return NULL;
    }

    Chanson *liste = NULL;
    char ligne[1024];

    while (fgets(ligne, sizeof(ligne), fichier)) {
        char *artiste = strtok(ligne, ",");
        char *titre = strtok(NULL, ",");
        char *annee_str = strtok(NULL, "\n");

        if (!artiste || !titre || !annee_str) {
            printf("Incorrect format.\n");
            fclose(fichier);
            return NULL;
        }

        int annee = atoi(annee_str);
        Chanson *nouvelle = creer_chanson(artiste, titre, annee);
        ajouter_chanson(&liste, nouvelle);
    }

    fclose(fichier);
    return liste;
}

// Fonction pour trier la liste chaînée
void trier_liste(Chanson **tete, const char *cle) {
    int trie = 0;
    while (!trie) {
        trie = 1;
        Chanson *courant = *tete;
        while (courant && courant->suivant) {
            Chanson *suiv = courant->suivant;
            int condition = 0;

            if (strcmp(cle, "artist") == 0)
                condition = strcmp(courant->artiste, suiv->artiste) > 0;
            else if (strcmp(cle, "title") == 0)
                condition = strcmp(courant->titre, suiv->titre) > 0;
            else if (strcmp(cle, "year") == 0)
                condition = courant->annee > suiv->annee;
            else {
                printf("Sort method does not exist.\n");
                exit(1);
            }

            if (condition) {
                // Échanger les contenus
                char *tempArtiste = courant->artiste;
                char *tempTitre = courant->titre;
                int tempAnnee = courant->annee;

                courant->artiste = suiv->artiste;
                courant->titre = suiv->titre;
                courant->annee = suiv->annee;

                suiv->artiste = tempArtiste;
                suiv->titre = tempTitre;
                suiv->annee = tempAnnee;

                trie = 0;
            }
            courant = courant->suivant;
        }
    }
}

// Afficher la liste des chansons
void afficher_liste(Chanson *tete) {
    while (tete) {
        printf("\"%s\" by \"%s\" released in %d.\n", tete->titre, tete->artiste, tete->annee);
        tete = tete->suivant;
    }
}

// Libérer la mémoire
void liberer_liste(Chanson *tete) {
    while (tete) {
        Chanson *temp = tete;
        tete = tete->suivant;
        free(temp->artiste);
        free(temp->titre);
        free(temp);
    }
}

// Fonction principale
int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Usage: ./music fichier.txt tri\n");
        return 1;
    }

    Chanson *liste = lire_fichier(argv[1]);
    if (!liste)
        return 1;

    trier_liste(&liste, argv[2]);
    afficher_liste(liste);
    liberer_liste(liste);

    return 0;
}