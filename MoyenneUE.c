#include <stdio.h>
#include <stdlib.h>
/*Crée par MONCEF STITI (Groupe 3 - BUT 1)*/



/* Fonction pour calculer la moyenne d'une matière */
float calculerMoyenne(float notes[], int coefficients[], int taille) {
    float somme = 0;
    int sommeCoeff = 0;

    for (int i = 0; i < taille; i++) {
        somme += notes[i] * coefficients[i];
        sommeCoeff += coefficients[i];
    }

    return somme / sommeCoeff;
}

/* Fonction principale */
int main(void) {
    /* Déclaration des notes et des coefficients pour chaque matière*/
    float devNotes[] = {0, 0, 0};
    int devCoeff[] = {1, 1, 1};

    float anglaisNotes[] = {0, 0, 0};
    int anglaisCoeff[] = {2, 1, 1};

    float bdNotes[] = {0, 0};
    int bdCoeff[] = {1, 2};

    float webNotes[] = {0};
    int webCoeff[] = {1};

    float egod2Notes[] = {0};
    int egod2Coeff[] = {1};

    float egod1Notes[] = {0, 0};
    int egod1Coeff[] = {1, 1};

    float ecNotes[] = {0};
    int ecCoeff[] = {1};

    float scr1Notes[] = {0};
    int scr1Coeff[] = {1};

    float scr2Notes[] = {0};
    int scr2Coeff[] = {1};

    float maths1Notes[] = {0};
    int maths1Coeff[] = {1};

    float maths2Notes[] = {0, 0};
    int maths2Coeff[] = {1, 2};

    float pppNotes[] = {0};
    int pppCoeff[] = {1};


    float SAE_DEV = 0;
    float SAE_SCR = 0;
    float SAE_BD = 0;
    float SAE_EGOD1 = 0;
    float SAE_EGOD2 = 0;

    /* Calcul des moyennes pour chaque matière */
    float devMoyenne = calculerMoyenne(devNotes, devCoeff, 3);
    float anglaisMoyenne = calculerMoyenne(anglaisNotes, anglaisCoeff, 3);
    float bdMoyenne = calculerMoyenne(bdNotes, bdCoeff, 2);
    float webMoyenne = calculerMoyenne(webNotes, webCoeff, 1);
    float egod2Moyenne = calculerMoyenne(egod2Notes, egod2Coeff, 1);
    float egod1Moyenne = calculerMoyenne(egod1Notes, egod1Coeff, 2);
    float ecMoyenne = calculerMoyenne(ecNotes, ecCoeff, 1);
    float scr1Moyenne = calculerMoyenne(scr1Notes, scr1Coeff, 1);
    float scr2Moyenne = calculerMoyenne(scr2Notes, scr2Coeff, 1);
    float maths1Moyenne = calculerMoyenne(maths1Notes, maths1Coeff, 1);
    float maths2Moyenne = calculerMoyenne(maths2Notes, maths2Coeff, 2);
    float pppMoyenne = calculerMoyenne(pppNotes, pppCoeff, 1);

    /* Calcul des moyennes des UE*/
    float ue1Moyenne = (devMoyenne * 42 + webMoyenne * 12 + anglaisMoyenne * 6 + SAE_DEV * 40) / 100;
    float ue2Moyenne = (devMoyenne * 24 + scr1Moyenne * 6 + maths1Moyenne * 15 + maths2Moyenne * 15 + SAE_DEV * 40) / 100;
    float ue3Moyenne = (scr1Moyenne * 21 + scr2Moyenne * 21 + anglaisMoyenne * 12 + ecMoyenne * 6 + SAE_SCR * 40) / 100;
    float ue4Moyenne = (bdMoyenne * 36 + maths1Moyenne * 18 + egod2Moyenne * 6 + SAE_BD * 40) / 100;
    float ue5Moyenne = (webMoyenne * 18 + egod1Moyenne * 27 + ecMoyenne * 15 + SAE_EGOD1 * 40) / 100;
    float ue6Moyenne = (webMoyenne * 5 + egod1Moyenne * 11 + egod2Moyenne * 11 + anglaisMoyenne * 11 + ecMoyenne * 11 + pppMoyenne * 11 + SAE_EGOD2 * 40) / 100;

    /*Calcul de la moyenne générale des UE*/
    float moyenneGeneraleUE = (ue1Moyenne + ue2Moyenne + ue3Moyenne + ue4Moyenne + ue5Moyenne + ue6Moyenne) / 6;

    /* Affichage des résultats*/
    printf("Moyenne UE1: %.2f\n", ue1Moyenne);
    printf("Moyenne UE2: %.2f\n", ue2Moyenne);
    printf("Moyenne UE3: %.2f\n", ue3Moyenne);
    printf("Moyenne UE4: %.2f\n", ue4Moyenne);
    printf("Moyenne UE5: %.2f\n", ue5Moyenne);
    printf("Moyenne UE6: %.2f\n", ue6Moyenne);
    printf("Moyenne générale des UE: %.2f\n", moyenneGeneraleUE);

    return EXIT_SUCCESS;
}
