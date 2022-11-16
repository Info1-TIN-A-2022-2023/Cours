#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    // Exercice 1
    int a = 0;

    printf("Entrez la valeur de a: ");
    scanf("%x", &a);

    printf("\nValeur de a: [%d]\n", a);
    */

    // Exercice 2
    int a = 0;
    int b = 0;
    int n = 0;

    printf("Entrez les valeurs de a et b séparés par une virgule: ");
    n = scanf("%d,%d", &a, &b);

    printf("\nValeur de a: [%d]\n", a);
    printf("Valeur de b: [%d]\n", b);
    printf("Valeur de n: [%d]\n", n);

    if (n != 2)
    {
        puts("Erreur, merci de respeter la consigne.");
    }
    else
    {
        // ici on peut utiliser les valeurs de a et b saisies par l'utilisateur.
    }

    return 0;
}
