#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#define TAILLE_TABLEAU 47

//-------------------------------------INITIALISATION GENERALE DES VARIABLE ET TABLEAUX------------------------------------------------------------------------------------------------------------------------


//-------------------------------------INITIALISATION DU DICTIONNAIRE NORMALE/PROTOTYPE-----------------------------------------------------------------------------------------------------------------------------

//char** dictionnaire[TAILLE_TABLEAU][TAILLE_TABLEAU] = {"RAOUF","SOOLKING","ARSALEN","JED","BISKRA","FRANCE","KARIM","ALGERIE","ROUGE","MADRID","AYMEN","YAHIA","JANVIER","CASSANDRO","RUSSIE"} ;

//-------------------------------------FONCTION POUR MASQUER LE DICTIONNAIRE NORMALE -------------------------------------------------------------------------------------------------------------------------------

void dictionnaireSecret(int longeur);

//---------------------------------  FONCTION 1 : BOUCLE POUR AFFICHER LES ELEMENTS DU DICTIONNAIRE  ------------------------------------------------------------------------------

char afficheElements(char** dictionnaire[]);

//---------------------------------  FONCTION 2 : BOUCLE POUR CALCULER LA LONGEUR DE CHAQUE MOT DU DICTIONNAIRE ------------------------------------------------------------------------------

int longeursElements(char** dictionnaire[]);

//---------------------------------  FONCTION 3 : BOUCLE POUR MASQUER TOUTE LES ELEMENTS DU DICTIONNAIRE ----------------------------------------------------------------------------

char masquerElements(int longeurs_tab[],char** dictionnaire[]);

//---------------------------------  FONCTION 4 : BOUCLE POUR CREER UNE COPIE D'UN TABLEAU ------------------------------------------------------------

int copieTableau(int tableauOriginal[], int tableauCopie[], int tailleTableau);

//---------------------------------  FONCTION 5 : BOUCLE POUR MASQUER UN SEUL CARACTERE ---------------------------------------

char caractereMasquer(int longeur) ;



#endif // MAIN_H_INCLUDED
