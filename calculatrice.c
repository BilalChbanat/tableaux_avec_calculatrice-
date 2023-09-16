#include <stdio.h>
#include <math.h>

void maxN(){

    int choixTab[1000],sizeTab;

    printf("Entrer rows number: \n");
    scanf("%d", &sizeTab);

    for (int i = 0; i < sizeTab; i++)
    {
        printf("Entrer element de index: %d\n", i);
        scanf("%d", &choixTab[i]);
    }
    
    for (int i = 0; i < sizeTab; i++)
    {
        if (choixTab[0] < choixTab[i])
        {
            choixTab[0] = choixTab[i];
        }
    }
    
    printf("Le maximum nombre dans la list est: %d\n",choixTab[0]);

}
void minN(){

     int choixTab[1000],sizeTab;

    printf("Entrer rows number: \n");
    scanf("%d", &sizeTab);

    for (int i = 0; i < sizeTab; i++)
    {
        printf("Entrer element de index: %d\n", i);
        scanf("%d", &choixTab[i]);
    }
    
    for (int i = 0; i < sizeTab; i++)
    {
        if (choixTab[0] > choixTab[i])
        {
            choixTab[0] = choixTab[i];
        }
    }
    
    printf("Le minimum nombre dans la list est: %d\n",choixTab[0]);
    
}
void moyenneN(){

    int choixTab[1000],sizeTab,resultat;

    printf("Entrer rows number: \n");
    scanf("%d", &sizeTab);

    for (int i = 0; i < sizeTab; i++)
    {
        printf("Entrer element de index: %d\n", i);
        scanf("%d", &choixTab[i]);
    }
    for (int i = 0; i < sizeTab; i++)
    {
        resultat = choixTab[i] + choixTab[i+1];

    }
    printf("le moyenne de tout les valeur est: %d \n",resultat /sizeTab );
    
}


void tableauMenu(){
    int choixTab;
    do
    {
    printf("\n \n \n \n======================== Choisissez une operation ======================== \n");
    printf("\n1. Max : \n");
    printf("2. Min : \n");
    printf("3. Moyenne : \n");
    printf("4. retoune a menu principal : \n");
    printf("\n \n \n======================== Choisissez une operation ======================== \n");
    scanf("%d", &choixTab);

    switch (choixTab)
    {
    case 1:
        maxN();
        break;
    case 2:
        minN();
        break;
    case 3:

        moyenneN();
        break;
    
    default:
        break;
    }

    } while (choixTab !=4);
    
}

float sum(float x, float y){
    int result;
    result = x + y;
    return result;
} 
float moin(float x, float y){
    int result;
    result = x - y;
    return result;
} 
float foi(float x, float y){
    int result;
    result = x * y;
    return result;
} 
float division(float x, float y){
    int result;
    result = x / y;
    return result;
} 
float caree(float x){
    float result;
    result = x * x;
    return result;
} 
float racine(float x){
    float result;
    result = sqrt(x);
    return result;
} 

void menu(){
    float choix;
    float a,b,c,d,e,f,g,h,i,j;

do
{
    printf("\n \n \n \n======================== Choisissez une operation ======================== \n");
    printf("1. Addition \n");
    printf("2. Soustraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Carre \n");
    printf("6. Racine carree \n");
    printf("7. Menu tableaux \n");
    printf("8. Quitter \n");
    printf("======================== Choisissez une operation ========================\n \n \n");
    scanf("%f", &choix);
    if (choix == 1)
    {
        printf("Entrer le premier nombre: \n");
        scanf("%f", &a);
        printf("Entrer le deuxieme nombre: \n");
        scanf("%f", &b);
        printf("Le resultat de la somme est: \n %f", sum(a,b),"\n"); 
    }else if(choix == 2){
        printf("Entrer le premier nombre: \n");
        scanf("%f", &c);
        printf("Entrer le deuxieme nombre: \n");
        scanf("%f", &d);
        printf("Le resultat de la soustraction est: \n %f", moin(c,d),"\n"); 
    }else if(choix == 3){
        printf("Entrer le premier nombre: \n");
        scanf("%f", &e);
        printf("Entrer le deuxieme nombre: \n");
        scanf("%f", &f);
        printf("\n Le resultat de la Multiplication de  est: \n %f", foi(e,f),"\n"); 
    }else if(choix == 4){
        printf("Entrer le premier nombre: \n");
        scanf("%f", &g);
        printf("Entrer le deuxieme nombre: \n");
        scanf("%f", &h);
        printf("Le resultat de la Division est: \n %f", division(g,h),"\n"); 
    }else if(choix == 5){
        printf("Entrer le premier nombre: \n");
        scanf("%f", &i);
        printf("Le resultat de la Carre est: \n %f", caree(i),"\n"); 

    }else if(choix == 6){
        printf("Entrer le premier nombre: \n");
        scanf("%f", &j);
        printf("Le resultat de la Racine est: \n %f", racine(j),"\n"); 
    }else if(choix == 7){
        tableauMenu();
    }
} while (choix != 8);


}


int main(int argc, char const *argv[])
{
    menu();

    return 0;
}





