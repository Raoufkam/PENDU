#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
#include "caracteres.h"
#define TAILLE_TABLEAU 50
#define MAX 45
#define MIN 1




//------------------------------------ FONCTION 1: POUR GENERER UN NOMBRE ALEATOIRE -------------------------------------------------------------------------------------------------------------------------------

int chercherCaracteres()

{
    int chercherCaractere = 0 ;

    chercherCaractere = (rand() % (MAX - MIN + 1)) + MIN ;
    //printf("Le numero aleatoire est : %d ",chercherCaractere);

    return chercherCaractere ;
}

//------------------------------------------------------------------------------------------------------------------------------------



//--------------------------------- FONCTION 2: POUR SELECTIONNE UN MOT ALEATOIRE DU DICTIONNAIRE -------------------------------------------------------------------------------------------------------------------------------

int choisirMot(char** dictionnaire[])

{
    int motIndice = 0 ;

    motIndice = chercherCaracteres() ;
    //printf(" Le mot a trouver est : %s \n \n ",dictionnaire[motIndice]);


    return motIndice ;
}

//--------------------------------- FONCTION 3 : POUR AFFECTER MOT LE MOT CHOISI -----------------------------------------------------------------


char motAffecter(char** dictionnaire[], int motIndice )
{
    char motChoisi[100];
    sprintf(motChoisi,"%s",dictionnaire[motIndice]);
    //printf(" TEST fonction motChoisi : %s \n",motChoisi);

    return motChoisi ;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------- FONCTION 4 : POUR DIVISER LE MOT A DES LETTRES -----------------------------------------------------------------

void diviserMot(char motChoisi[] , int longeur )
{
    int i = 0 ;
    do
    {
        //motChoisi[i]
        i++ ;

    } while (i < longeur ) ;

}
//--------------------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------- FONCTION 5 : POUR CALCULER L'OCCURENCE DE LA LETTRE -----------------------------------------------------------------


void occurenceLettre(char *lettreEntrer , char motChoisi[] ,int longeur)
{
    int i = 0 , occurence = 0 ;

    for (i ; i < longeur ; i++)
    {
        if (motChoisi[i]==lettreEntrer)
        {
            occurence++ ;
        }

    }
    //printf(" Le nombre d'occurence de la lettre %c dans le mot %s est : %d",lettreEntrer,motChoisi,occurence);
}

//--------------------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------- FONCTION 6 : POUR VERIFIER SI LE MOT CONTIENT LA LETTRE  -----------------------------------------------------------------


char verifierLettre(char motChoisi[] ,char motMasquer[] , int longeur , char *lettreEntrer )
{
    int i = 0 ;
    bool existe ;
    for (i ; i < longeur ; i++)
    {
        if(motChoisi[i]== *lettreEntrer)
        {
            motMasquer[i] = *lettreEntrer ;
        }
    }

    printf(" %s \n ", motMasquer);

    return motMasquer ;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------- FONCTION 7 : RENVOYER UN BOOLEAN EXISTE -----------------------------------------------------------------


bool existe(char *motMasquer , char *lettreEntrer )
{
    bool existe ;
    char suite = NULL ;
    suite = strchr( motMasquer , *lettreEntrer );
    if (suite!=NULL)
    {
        existe = true ;
    }
    else if (suite == NULL)
    {
        existe = false ;

    }

    return existe ;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------








