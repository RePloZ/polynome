#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern racine();
extern tableauSigneVariations();
extern deriPrimiCano();

int parametresPolynome(void) /* pas d'entree donc void */
{
    int a, b, c; /* il manquait un point virgule */

    printf("    Votre fonction polynome a pour expression algebrique :\n\n p(x) = a*x^2 + b*x + c");
    printf("        (avec a, b et c des nombres reels sous forme decimale)\n");
    //printf("\n Veuillez saisir les reels a, b et c sous forme decimale.\n\n");
    //printf(" a = ");
    //scanf("%f", &a);
    //printf(" b = ");
    //scanf("%f", &b);
    //printf(" c = ");
    //scanf("%f", &c);
    return 0;//a, b, c; /* c'est ici qu'on retourne une valeur*/
}


int affichageMenu(void)
{
    int choixMenu;

    printf("******************ETUDE DE FONCTION POLYNOME DU SECOND DEGRE******************\n\n");
    printf("    Bienvenue ! Ici, vous pourrez etudier n'importe quelle fonction polynome du second degre.\n");
    printf("    A partir de l'expression algebrique de votre polynome p(x), vous pourrez connaitre :\n\n");
    printf(" 1. Ses racines qui verifient p(x)=0\n");
    printf(" 2. La derivee, la primitive et la forme canonique de p(x)\n");
    printf(" 3. Son tableau de signe et le tableau de variation de p(x)\n");
    printf(" 4. Sa representation graphique Cp\n\n");
    printf("\nVeuillez saisir le chiffre corespondant a l'option qui vous interesse\n\n");
    scanf("%d", &choixMenu);
    return choixMenu;
}
int main(void)
{
    switch (affichageMenu())
    {
    case 1:
        racine();
        break;
    case 2:
        deriPrimiCano();
        break;
    case 3:
        tableauSigneVariations();
        break;
    case 4:
        break;
    default:
        printf("Vous ne ferez rien du tout ! Recommencez s'il vous plait.");
        break;
    }

    system("PAUSE");
    return 0;
}


