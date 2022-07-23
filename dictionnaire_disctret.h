#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "dictionnaire.h"
#define TAILLE_TABLEAU 15

void dictionnaireSecret(int* longeur )
{

    char tab[TAILLE_TABLEAU][10] ;
    char str1[100] = "*" , str2[100];
    for (int i = 0 ; i < TAILLE_TABLEAU ; i++)
    {
        for (int j = 0 ; j < longeur ; j++)
        {
            sprintf(str2,"*");
            strcat(str1, str2);
        }
        strcpy (tab[i],str1) ;
        printf("La %d mot discret est : %s \n ",(i+1),tab[i]);
        strcpy (str1,"*");
    }

}

#endif // MAIN_H_INCLUDED
