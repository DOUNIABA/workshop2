#include <stdio.h>
#include <stdlib.h>
int main()
{

int nbr;
printf("saisir un nombre:\n");
scanf("%d",&nbr);
if(nbr==0){
    printf("non valide \n");
}
if(nbr%2==0){
    printf("le nombre %d est pair \n",nbr);
}
else if (nbr%2==1){
    printf("le nombre %d est impair \n",nbr);
}
  return 0;
}
