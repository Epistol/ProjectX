#include <stdio.h>
#include <stdlib.h>



// int changement_orientation(int Salle,char Etat_Joueur) {

//  for (i = 0; i < 4; i++) {
//    if (Etat_Joueur == 'D') {
//       if (i = )
//  }}}








void dialoguesalle(int SalleEnCours, char Etat_Joueur) {

 int *Salle[4];
 int i;

    if (SalleEnCours == 1) { // si salle en cours = première salle

        if (Etat_Joueur == 'D') { //si l'orientation du perso est "orienté à droite"
            {
                //changement_orientation(1,'D');  //HAUT-BAS-GAUCHE-DROIT en se basant sur la salle[3] chargée et modification suivant l'état du joueur

                Salle[0] = 1;
                Salle[1] = 0;
                Salle[2] = 0;
                Salle[3] = 0;




                    printf("|-----------| \n");
                    printf("|          /| \n");
                    printf("|         / | \n");
                    printf("|_______ /  | \n");
                    printf("|       |   | \n");
                    printf("|   <-  |   | \n");
                    printf("|_______|   | \n");
                    printf("|        \\  | \n");
                    printf("|         \\ | \n");
                    printf("|-----------| \n");

                        if (Salle[0] == 1 && Salle[1] == 0 && Salle[2] == 0 && Salle[3] == 0 ) {
                             printf("\n Vous ne pouvez qu'avancer \n");
                        }




                        else {
                              if (Salle[0] == 1) {
                            printf("\n Vous pouvez avancer \n");

                        }
                        if (Salle[1] == 1) {
                            printf("\n Vous pouvez reculer \n");
                        }
                        if (Salle[2] == 1) {
                            printf("\n Vous pouvez aller a gauche \n");
                        }
                        if (Salle[3] == 1) {
                            printf("\n Vous pouvez aller a droite \n");
                        }
                        }





                    }
                }
            }

        }


void chargersalle(int SalleEnCours, char Etat_Joueur) { // fonction qui va retourner le dialogue du joueur en fonction de la salle ou il se trouve et de son orientation

    if (SalleEnCours == 1) { // si salle en cours = première salle

        if (Etat_Joueur == 'D') { //si l'orientation du perso est "de face"
            {

                dialoguesalle(SalleEnCours, Etat_Joueur); //on affiche les possibilités du perso

            }
        }
    }
}





int main() {

    int SalleEnCours = 1; // on commence dans la première salle
    char Etat_Joueur = 'D'; // personnage vers la droite
    int Salle[4]; // tableau de 4 sorties possible de la salle

    printf("Bienvenue dans THE MAZE - Trouvez la sortie pour rester en vie ... \n");
    printf(" \n");
    chargersalle(SalleEnCours, Etat_Joueur); // on va afficher la salle 1- le ,joueur regarde vers la droite



}

