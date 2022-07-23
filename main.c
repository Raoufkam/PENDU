#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
#include<time.h>
#define TAILLE_TABLEAU 50
#define ESSAIS_MAX 10


int main(int argc , char *argv[])
{
    srand(time(NULL));
    bool exister , partie = true ;
    int essais = ESSAIS_MAX , j = 0 ;
    int motIndice , longeurMot ;
    int longeurs_tab[TAILLE_TABLEAU] ;
    char motChoisis[100] , motMasquer[100] ;
    char nomUtilisateur[100] ;
    char** lettreEntrer [1][100] ;
    char tab[50][50] ;
    char** dictionnaire[TAILLE_TABLEAU][TAILLE_TABLEAU] = {"MINUTE","POMME","CIEL","ARBRE","FILLE","SAVON","GANTS","VOITURE","LAIT","IMAGE","PUISSANCE","ROUGE","PROPRE","ROBOT","VILLAGE","VOYAGE","ROND","CUBE","PAPIERS","STYLO","VELO","JEUX","BOUTEILLE","ACTION","MARRON","CHAISE","BASKET","CHEMISE","DANGER","SPORT","FLEURE","FROMAGE","BOISSON","SMARTPHONE","VALISE","AVION","BATEAU","VERT","CERCLE","DRAPEAU","LIVRE","INTERNET","HUMAINS","SUISSE","TERRE","SALADE","ARGENT"} ;






//-------------------------------------------------- INTERFACE + PARTIE  -------------------------------------------------

    strcpy(nomUtilisateur,utilisateur());
    premierePartie(nomUtilisateur);




//-------------------------------------------------- DICTIONNAIRE + CARACTERES -------------------------------------------------

    for(j ; partie == true ; j++)
    {

        //afficheElements(dictionnaire);
        longeursElements(dictionnaire);
        //choisirMot(dictionnaire);
        masquerElements(longeursElements(dictionnaire),dictionnaire);
        copieTableau(longeursElements(dictionnaire),longeurs_tab,TAILLE_TABLEAU) ;
        motIndice = choisirMot(dictionnaire);
        longeurMot = longeurs_tab[motIndice] ;
        strcpy(motChoisis,motAffecter(dictionnaire,motIndice));
        strcpy(motMasquer,caractereMasquer(longeurMot)) ;
        printf("\n Quel est le mot secret ?  %s \n \n",motMasquer);

        do
        {
            int i = 0 ;
            printf("ENTRER UNE LETTRE : \n");
            scanf("%s",&lettreEntrer[i]);
            //printf(" \n La lettre est %c \n ",*lettreEntrer[0]) ;
            verifierLettre(motChoisis,motMasquer,longeurMot,lettreEntrer[i]);
            exister = existe(motMasquer,lettreEntrer[i]);
            if (exister == false )
            {
                essais--;
            }
            if(strcmp(motChoisis,motMasquer)== 0)
            {
                printf(" \n***********************|       BRAVO ' %s ' ! LE MOT SECRET ETAIT BIEN : | %s |       |*****************\n " , nomUtilisateur , motChoisis);
                essais = -10 ;
            }
            nombreEssais(exister , essais , motChoisis , nomUtilisateur) ;
                i++ ;

        }while(essais>0) ;

        essais = ESSAIS_MAX ;
        partie = refairePartie(partie,nomUtilisateur) ;

    }



    return 0;
}







