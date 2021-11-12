#include <stdio.h>
#include <stdlib.h>
int main()
{

int nbr;
printf("saisir un nombre:\n");
scanf("%d",&nbr);
if(nbr<0){
    printf("le nombre %d est négatif\n",nbr);
}
else if (nbr>0){
    printf("le nombre %d est positif\n",nbr);
}
else{("le nombre %d est nul",nbr);
}

    return 0;
}