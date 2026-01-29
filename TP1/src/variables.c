#include <stdio.h>

int main() {
    
    // --- ÉTAPE 1 : CRÉER ET REMPLIR LES BOÎTES ---
    
    // Je crée une boîte 'char' nommée 'ma_lettre' et je mets 'A' dedans
    char ma_lettre = 'A';

    // Je crée une boîte 'int' nommée 'mon_nombre' et je mets 50 dedans
    int mon_nombre = 50;


    // --- ÉTAPE 2 : AFFICHER LE CONTENU ---

    // Pour afficher un char, j'utilise le code magique %c
    printf("Le contenu de ma variable char est : %c \n", ma_lettre);

    // Pour afficher un int, j'utilise le code magique %d
    printf("Le contenu de ma variable int est : %d \n", mon_nombre);

    return 0;
}
