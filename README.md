# puissance4


Le jeu de Puissance 4 est un jeu de réflexion (casse-tête) un peu comme le jeu de morpion, à la différence qu’ici
on ne peut mettre un pion que sur un autre ou tout à fait en bas dans la grille. C’est un jeu qui se joue à deux
(deux joueurs ou un joueur contre l’ordinateur.
Règles du jeu
Le but du jeu est d'aligner une suite de 4 pions de même couleur ou de même symbole sur une
grille comptant 6 lignes et 7 colonnes. Tour à tour, les deux joueurs placent un pion dans la colonne de
leur choix, le pion coulisse alors jusqu'à la position la plus basse possible dans ladite colonne à la suite
de quoi c'est à l'adversaire de jouer. Le vainqueur est le joueur qui réalise le premier un alignement
(horizontal, vertical ou diagonal) consécutif d'au moins quatre pions de sa couleur ou de son symbole.
Si, alors que toutes les cases de la grille de jeu sont remplies, aucun des deux joueurs n'a réalisé un tel
alignement, la partie est déclarée nulle.
Un joueur ne peut jouer deux fois de suite sans que son
second ne joue.
Au début du jeu on a une grille vide qui d’affiche et on
demande aux joueurs leurs noms. Le système décide
aléatoirement quel joueur commence le jeu, et lui demande
de choisir son symbole entre les deux dans la parenthèse
(X, O). Le second symbole est automatiquement attribué au
second joueur.
Figure 1 : Exemple de configuration du jeu à
un instant T
Le système décide automatiquement de quel joueur
commence la partie
Pour jouer, il suffit de choisir la colonne dans laquelle on veut jouer et le symbole du joueur simule une
descente case par case jusqu’à la case la plus passe possible.
Le jeu s’arrête lorsqu’un joueur gagne ou lorsqu’il n’est plus possible de jouer.
Travail à faire
1- Déclarer une structure de données (matrice de 6 lignes et 7 colonnes) pour représenter l’image
du jeu en mémoire.
2- Ecrire une fonction grille4puissance qui permet d’afficher la grille du jeu à une position bien
précise de l’écran de jeu.
3- Ecrire une fonction init_jeu qui permet de demander aux joueurs d’entrer leurs noms, décide de
quel joueur commence la partie et lui demande de choisir son symbole pour commencer.
4- Ecrire une fonction jouer_colonne qui prend en paramètre un numéro de joueur et une colonne,
puis joue le symbole de ce joueur dans cette colonne.
15- Ecrire une fonction verif_gain qui vérifie après chaque jouée, si le jouer a gagné la partie. Cela
permet de savoir si le jeu doit s’arrêter ou continuer.
6- Ecrire un programme qui exploite toutes ces fonctions pour mettre en place et jouer au jeu de
puissance 4.
