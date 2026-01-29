#include <stdio.h>

int main() {
    
    // --- ÉTAPE 1 : CRÉER ET REMPLIR LES BOÎTES ---
    
    // Je crée une boîte et je mets ma valeur dedans dedans
    char ma_lettre = 'A';
    unsigned char ma_lettreun = 'B';
    int mon_nombreint = 50;
    unsigned int mon_nombreintun = 50;
    short mon_nombreshort = -10;
    unsigned short mon_nombreshortun = -10;
    long int mon_nombrelongint = 200000000;
    unsigned long int mon_nombrelongintun = 80000000;
    long long int mon_nombrelonglong = 9999999999999999;
    unsigned long long int mon_nombrelonglongun = 77777777777777777;
    float mon_nombrefloat = 19.5f;
    double mon_nombredouble = 3.1415926535;
    long double mon_nombrelongdouble = 3.14159265358979323846L;
  


    // --- ÉTAPE 2 : AFFICHER LE CONTENU ---
    printf("Le contenu de ma variable char est : %c \n", ma_lettre);
    printf("Le contenu de ma variable unsigned char est : %d \n", ma_lettreun);
    printf("Le contenu de ma variable int est : %d \n", mon_nombreint);
    printf("Le contenu de ma variable unsigned int est : %u \n", mon_nombreintun);
    printf("Le contenu de ma variable short est : %hd \n", mon_nombreshort);
    printf("Le contenu de ma variable unsigned short est : %hu \n", mon_nombreshortun);
    printf("Le contenu de ma variable long int est : %ld \n", mon_nombrelongint);
    printf("Le contenu de ma variable unsigned long int est : %lu \n", mon_nombrelongintun);
    printf("Le contenu de ma variable long long int est : %lld \n", mon_nombrelonglong);
    printf("Le contenu de ma variable unsigned long long int est : %llu \n", mon_nombrelonglongun);
    printf("Le contenu de ma variable float est : %f \n", mon_nombrefloat);
    printf("Le contenu de ma variable double est : %lf \n", mon_nombredouble);
    printf("Le contenu de ma variable long double est : %Lf \n", mon_nombrelongdouble);

    return 0;
}




