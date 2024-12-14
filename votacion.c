#include<stdio.h>

int main(int argc, char const *argv[])
{
    int voto,n,i,sumaHambur=0,sumaPizza=0,sumaPasta=0,sumaPollo=0,sumaCarne=0;

    printf("\n----Bienvenido a la votacion del almuerzo de hoy---\n\n");
    printf("\nIngrese la cantidad de votantes:");
    scanf("%d",&n);


for (i = 0; i < n; i++)
{

    printf("\nIngrese el numero segun la opcion deseada\n");
    printf("[1] Hamburgesa\n [2]Pizza\n [3]Pasta al pesto\n [4]Pollo con ensalada\n [5]Carne al horno con papas");
    scanf("%d",&voto);

    if (voto==1)
    {
        sumaHambur=sumaHambur+1;

    }
    if (voto==2)
    {
        sumaPizza=sumaPizza+1;
    }
    if (voto==3)
    {
        sumaPasta=sumaPasta+1;
    }
    if (voto==4)
    {
        sumaPollo=sumaPollo+1;
    }
    if (voto==5)
    {
        sumaCarne=sumaCarne+1;
    }
    
    

}    
    
    if (sumaCarne>sumaHambur && sumaCarne>sumaPizza && sumaCarne>sumaPasta &&sumaCarne>sumaPollo)
    {
       printf("La votacion termino! el dia de hoy almorzaremos Carne al horno con papas con un total de votos de %d",sumaCarne);
    }

    if (sumaHambur>sumaCarne && sumaHambur>sumaPasta && sumaHambur>sumaPizza && sumaHambur>sumaPollo)
    {
        printf("La votacion termino! el dia de hoy almorzaremos Hamburguesa con papas fritas con un total de votos de %d",sumaHambur);
    }
    if (sumaPasta>sumaCarne && sumaPasta>sumaHambur && sumaPasta>sumaPizza && sumaPasta>sumaPollo)
    {
        printf("La votacion termino! el dia de hoy almorzaremos Pasta al pesto con un total de votos de %d",sumaPasta);
    }
    if (sumaPizza>sumaCarne && sumaPizza>sumaHambur && sumaPizza>sumaPasta && sumaPizza>sumaPollo)
    {
        printf("La votacion termino! el dia de hoy almorzaremos Pizza con un total de votos de %d",sumaPizza);
    }
    if (sumaPollo>sumaCarne && sumaPollo>sumaHambur && sumaPollo>sumaPasta && sumaPollo>sumaPizza)
    {
       printf("La votacion termino! el dia de hoy almorzaremos Pollo con ensalada con un total de votos de %d",sumaPollo);
    }
    
    
    
    return 0;
}
