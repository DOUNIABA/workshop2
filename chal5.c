#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1 ,num2;
    printf("entrez le premier nombre: \n");
    scanf("%d", &num1);
      printf("entrez le deuxiéme nombre: \n");
    scanf("%d", &num2);
     float som=num1+num2;
     printf("la somme est: %f",som\n);
    if(  num1==num2){
      
        printf ("les deux nombres sont identiques l donc a somme est: %f ", som*3);
    }
}