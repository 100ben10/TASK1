#include <stdio.h>

// Déclarations de fonctions
float addition(float a, float b);
float soustraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

int main() {
    // Affichage du nom du programme dans le terminal
    printf("*************************\n");
    printf("*  Calculatrice Simple  *\n");
    printf("*************************\n");

    // Variables pour stocker les entrées de l'utilisateur et le résultat
    float num1, num2, resultat;
    char operateur;

    // Menu des opérations
    printf("Menu des opérations :\n");
    printf("1. Addition (+)\n");
    printf("2. Soustraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");

    // Choix de l'opération
    printf("Choisissez le numéro de l'opération : ");
    int choix;
    scanf("%d", &choix);

    // Obtenir l'entrée de l'utilisateur
    printf("Entrez le premier nombre : ");
    scanf("%f", &num1);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &num2);

    // Effectuer le calcul en fonction du choix de l'opération
    switch (choix) {
        case 1:
            resultat = addition(num1, num2);
            operateur = '+';
            break;
        case 2:
            resultat = soustraction(num1, num2);
            operateur = '-';
            break;
        case 3:
            resultat = multiplication(num1, num2);
            operateur = '*';
            break;
        case 4:
            // Vérifier la division par zéro
            if (num2 != 0) {
                resultat = division(num1, num2);
                operateur = '/';
            } else {
                printf("Erreur : Division par zéro\n");
                return 1; // Quitter le programme avec un code d'erreur
            }
            break;
        default:
            printf("Erreur : Choix invalide\n");
            return 1; // Quitter le programme avec un code d'erreur
    }

    // Afficher le résultat
    printf("Résultat : %.2f %c %.2f = %.2f\n", num1, operateur, num2, resultat);

    return 0; // Quitter le programme avec succès
}

// Définitions de fonctions

float addition(float a, float b) {
    return a + b;
}

float soustraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}

