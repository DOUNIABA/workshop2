#include<stdio.h>

int main()
{
    float num ;
    printf("entrez un nombre ");
    scanf("%f",&num);
    if(num>0){
    printf("positive");}
    else if(num<0){
    printf("négative");}
    else{
    printf("null");}
    return 0;
}