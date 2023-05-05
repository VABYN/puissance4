#include <stdio.h>
#include <stdlib.h>
int jouer_colonne(Grille* g, int joueur, int colonne, Joueur j1, Joueur j2) {
    char symbole = (joueur == 1) ? j1.symbole : j2.symbole;
    for (int i = NB_LIGNES-1; i >= 0; i--) {
        if (g->grille[i][colonne] == ' ') {
            g->grille[i][colonne] = symbole;
            return 1;
        }
    }
    printf("La colonne est deja pleine, veuillez jouer ailleurs.\n");
    return 0;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
