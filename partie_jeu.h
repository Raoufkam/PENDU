#ifndef PARTIE_JEU_H_INCLUDED
#define PARTIE_JEU_H_INCLUDED
#define TAILLE_TABLEAU 50


//--------------------------------- FONCTION 2: COMPTEUR DES ESSAIS -----------------------------------------------------------------

void nombreEssais( bool existe , int essais , char *motChoisi , char *nomUtilisateur);

//--------------------------------- FONCTION 3 : MOT TROUVER -----------------------------------------------------------------

int motTrouver(char* motChoisi , char* motMasquer , char* nomUtilisateur , int essais );

//--------------------------------- FONCTION 4 : REFAIRE UNE PARTIE -----------------------------------------------------------------

bool refairePartie(bool reponse, char *nomUtilisateur);



#endif // PARTIE_JEU_H_INCLUDED
