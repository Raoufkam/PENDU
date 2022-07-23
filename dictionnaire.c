#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "dictionnaire.h"
#define TAILLE_TABLEAU 47

//-------------------------------------INITIALISATION GENERALE DES VARIABLE ET TABLEAUX------------------------------------------------------------------------------------------------------------------------

int i = 0 , j = 0 , t = 0 ;
int longeur = 0 ;
int longeurs_tab[47] ;
char tab[TAILLE_TABLEAU][20];


//-------------------------------------INITIALISATION DU DICTIONNAIRE NORMALE/PROTOTYPE-----------------------------------------------------------------------------------------------------------------------------

//char** dictionnaire[TAILLE_TABLEAU][TAILLE_TABLEAU] = {"RAOUF","SOOLKING","ARSALEN","JED","BISKRA","FRANCE","KARIM","ALGERIE","ROUGE","MADRID","AYMEN","YAHIA","JANVIER","CASSANDRO","RUSSIE"} ;

//-------------------------------------FONCTION POUR MASQUER LE DICTIONNAIRE NORMALE -------------------------------------------------------------------------------------------------------------------------------


void dictionnaireSecret(int longeur)
{

  longeur = longeur - 1 ;
  char str1[100] = "*" , str2[100];
  for (i = 0 ; i < TAILLE_TABLEAU ; i++)
  {
        for (j = 0 ; j < longeur ; j++)
        {
            sprintf(str2,"*");
            strcat(str1, str2);
        }
        strcpy (tab[i],str1) ;
        //printf("La %d mot discret est : %s \n ",(i+1),tab[i]);
        strcpy (str1,"*");

  }

  i = 0 ;
  j = 0 ;

  return tab ;
}

//---------------------------------  FONCTION 1 : BOUCLE POUR AFFICHER LES ELEMENTS DU DICTIONNAIRE  ------------------------------------------------------------------------------


char afficheElements(char** dictionnaire[])
{

    printf(" Ma liste de mots dans le dictionnaire : \n");
    for (i ; i < TAILLE_TABLEAU ; i++)
    {
        //printf(" %s \n", dictionnaire[i] ); //AFFICHAGE DE LA LISTE DES MOTS DANS LE DICTIONNAIRE
    }
    i = 0;
}


//---------------------------------  FONCTION 2 : BOUCLE POUR CALCULER LA LONGEUR DE CHAQUE MOT DU DICTIONNAIRE ------------------------------------------------------------------------------

int longeursElements(char** dictionnaire[])
{

    for (j ; j < TAILLE_TABLEAU ; j++ )
    {
        longeur = strlen(dictionnaire[j]) ; // strlen : CALCULE LA LONGEUR
        longeurs_tab[j] = longeur ; // STOCKER LES LONGEURS DANS UN TABLEAU
        //printf("La longeur de la chaine %s est : %d \n ",dictionnaire[j],longeur); //AFFICHAGE DES LONGEURS
    }
    j = 0 ;

    return longeurs_tab ;
}


//---------------------------------  FONCTION 3 : BOUCLE POUR MASQUER TOUTE LES ELEMENTS DU DICTIONNAIRE ----------------------------------------------------------------------------


char masquerElements(int longeurs_tab[],char** dictionnaire[])
{
    for (t ; t < TAILLE_TABLEAU ; t ++)
    {
        dictionnaireSecret(longeurs_tab[t]); // ON FAIT APPEL A LA FONCTION 1
        //printf("Le mot secret de %s est : %s \n ",dictionnaire[t],tab[t]) ; //AFFICHAGE DES MOTS EN MODE NORMALE + MODE MASQUER
    }
    t = 0 ;
    //return tab ;
}



//---------------------------------  FONCTION 4 : BOUCLE POUR CREER UNE COPIE D'UN TABLEAU ENTIERS ---------------------------------------

int copieTableau(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{

    for ( i = 0 ; i < tailleTableau ; i++ )
    {
        tableauCopie[i] = tableauOriginal[i] ;
    }

    return tableauCopie ;
}

//---------------------------------  FONCTION 5 : BOUCLE POUR MASQUER UN SEUL CARACTERE ---------------------------------------

char caractereMasquer(int longeur)
{
    longeur = longeur - 1 ;
    char str1[100] = "*" , str2[100] , motMasquer[100];
    for (j = 0 ; j < longeur ; j++)
        {
            sprintf(str2,"*");
            strcat(str1, str2);
        }
    sprintf(motMasquer,"%s",str1);
    //printf("Caractère masquer : %s \n ",motMasquer);


    return motMasquer ;
}

//---------------------------------  FONCTION 5 : BOUCLE POUR MASQUER UN SEUL CARACTERE ---------------------------------------

