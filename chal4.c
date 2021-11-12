#include <stdio.h>
#include <stdlib.h>
int main()
{

char n;
printf("saisir une lettre:\n");
scanf("%s",&n);
switch(n){
    case 'a':
    printf("la lettre est une voyelle");
    break;
    
    case'e':
    printf("la lettre est une voyelle \n");
    break;
    
    case'i':
    printf("la lettre est une voyelle \n");
    break;
    
    case'o':
    printf("la lettre est une voyelle \n");
    break;
    
    case'u':
    printf("la lettre est une voyelle \n");
    break;
    
    case'y':
    printf("la lettre est une voyelle \n");
    break;
    default:
    printf("consonnes");
}

    return 0;
}