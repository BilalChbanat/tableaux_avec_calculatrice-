#include <stdio.h>
#include <math.h>
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
    printf("7. Quitter \n");
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
    }
} while (choix != 7);


}


int main(int argc, char const *argv[])
{
    menu();

    return 0;
}





