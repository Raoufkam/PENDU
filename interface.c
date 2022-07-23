#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
#include "interface.h"
#define TAILLE_TABLEAU 50
//--------------------------------- FONCTION 1: ENTRER NOM UTILISATEUR -----------------------------------------------------------------

char utilisateur()
{
    char nomUtilisateur[100];

    printf("\n");
    printf("    ENTRER VOTRE NOM D'UTILISATEUR  :  ") ;
    scanf("%s",nomUtilisateur);

    return nomUtilisateur ;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------


//--------------------------------- FONCTION 2: INTERFACE PREMIERE PARTIE  -----------------------------------------------------------------


void premierePartie(char nomUtilisateur[])
{
    printf("\n \n");
    printf("                  <<<<<<----      | BIENVENUE %s DANS LE JEU [PENDU] |      ---->>>>>>>                \n \n",nomUtilisateur);
    printf("          CONSIGNE DU JEU :  Tentez de deviner le mot secret en entrant des lettres une par une au clavier.  \n  Ne gaspillez pas vos coups, car si trop de vos choix sont errones vous tuerez le pendu et vous perdrez la partie. \n \n  << PS : Tous mes mots seront en majuscules >> \n \n  ");

}

//-----------------------------------------------------------------------------------------------------------------------------------------------
