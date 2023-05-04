#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[100];
    int choix,prix,nb,avoir,reliquat;

    printf("Bienvenu dans notre boutique FEMJ\n");

    printf("Veuillez entrer votre nom : ");
    scanf("%s",nom);

    printf("Combien avez-vous ? : ");
    scanf("%d",&avoir);

    // Affichage des produits de la boutique
    printf("\nLes produits de notre boutique sont : ");
    printf("\n1-Couscous (750FCFA)\n2-Pates (300FCFA)\n3-Riz (500FCFA)"
           "\n4-Haricot (600FCFA)\n5-Sardines (450FCFA)\n6-Saucisses (800FCFA)");

    prix = 0;
    choix = -1;
    while (choix!=0) {
        printf("\n\nVeuillez choisir ce que vous voulez acheter(l'indice du produit). Entrez 0 si vous ne voulez plus continuez : ");
        scanf("%d",&choix);

        switch(choix) {
            case 1 :
                do {
                    printf("Entrez le nombre de paquets de couscous que vous voulez : ");
                    scanf("%d",&nb);
                } while (nb<=0);
                prix = prix + nb*750;
                break;
            case 2 :
                do {
                    printf("Entrez le nombre de pates que vous voulez : ");
                    scanf("%d",&nb);
                } while (nb<=0);
                prix = prix + nb*100;
                break;
            case 3 :
                do {
                    printf("Entrez le nombre de bol(s) de riz que vous voulez : ");
                    scanf("%d",&nb);
                } while (nb<=0);
                prix = prix + nb*500;
                break;
            case 4 :
                do {
                    printf("Entrez le nombre de bol(s) d'haricot que vous voulez : ");
                    scanf("%d",&nb);
                } while (nb<=0);
                prix = prix + nb*600;
                break;
            case 5 :
                do {
                    printf("Entrez le nombre de sardine que vous voulez : ");
                    scanf("%d",&nb);
                } while (nb<=0);
                prix = prix + nb*450;
                break;
            case 6 :
                do {
                    printf("Entrez le nombre de saucisse(s) que vous voulez : ");
                    scanf("%d",&nb);
                } while (nb<=0);
                prix = prix + nb*800;
                break;
        }

        reliquat = avoir - prix;
        if (reliquat<0) {
            printf("\nVous n'avez pas suffisament d'argent pour continuer");
            break;
        }
        else {
            printf("\nIl vous rete %dFCFA",reliquat);
        }
    }

    printf("\nLe montant total que %s doit payer est : %dFCFA\n",nom,prix);

    reliquat = avoir - prix;
    if (reliquat<0) {
        printf("\nVotre argent est insuffisant malheuresement");
    }
    else {
        printf("\nVous prendrez %dFCFA comme reliquat",reliquat);
    }

    return 0;
}
