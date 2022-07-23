#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
#include<time.h>
#include "partie_jeu.h"
#define TAILLE_TABLEAU 50
#define ESSAIS_MAX 10



//--------------------------------- FONCTION 1: COMPTEUR DES ESSAIS -----------------------------------------------------------------

void nombreEssais( bool existe , int essais , char *motChoisi , char *nomUtilisateur)
{
    if (essais == 0)
    {
        printf("\n                  DESOLE VOUS N'AVEZ PLUS AUCUN COUP A JOUER :(     \n");
        essais = -1 ;
    }
    else if(essais > 0 )
    {
        printf("\n         Il vous reste < %d coups > a jouer     \n \n   ",essais);
    }

    if (essais == -1)
    {
        printf("\n /\/\/\/\/\/\/\ DOMMAGE | %s  | VOUS N'AVEZ PAS PU TROUVER LE MOT SECRET ! /\/\/\/\/\/\/\ \n ",nomUtilisateur);
        printf("\n                 |=====>>   LE MOT RECHERCHER EST : |_  %s  _|              \n ",motChoisi);
    }

}

//--------------------------------- FONCTION 3 : MOT TROUVER -----------------------------------------------------------------

int motTrouver(char *motChoisi , char *motMasquer , char *nomUtilisateur , int essais )
{
    if (motChoisi == motMasquer)
    {
        printf("\n**********************      BRAVO | %s | ! VOUS AVEZ TOUVER LE MOT CACHE        \*********    \n " , nomUtilisateur);
        essais = 0 ;
    }


    return essais ;
}

//--------------------------------- FONCTION 4 : REFAIRE UNE PARTIE -----------------------------------------------------------------

bool refairePartie(bool reponse, char *nomUtilisateur)
{
    int partie = NULL ;
    printf(" \n -----------------------------|   VEUILLEZ VOUS REFAIRE UNE AUTRE PARTIE ?   |----------------------- \n");
    printf("\n                                       | 1- OUI  |       | 2- NON   |                         \n");
    scanf("%d",&partie);
    if (partie == 2)
    {
        printf("\n -------------------------<<<<<<<|  MERCI ' %s ' A BIENTOT !  |>>>>>>>----------------------------- \n", nomUtilisateur);
        reponse = false ;
    }
    else if(partie == 1)
    {
        reponse = true;
        printf("\n \n");
    }
    else
    {
        refairePartie(reponse,nomUtilisateur);
    }

    return reponse ;
}
