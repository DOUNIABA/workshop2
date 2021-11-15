#include<stdio.h>

int main()
{
    float note;
    printf("entrez la note finale");
    scanf("%f",&note);
    if(note>=10 && note<12){
    printf("passable");
    } 
    
    else if (note>=12 && note<14){
    printf("assez bien");}
    
    
    else if (note>= 14&& note<16  ){
    printf("bien");}
    
    
    else if (note>=16 && note <=20){
    printf("trés bien");}
    
    else if (note >=0 && note <10){
    printf("note faible");}
    
    else {
    printf("note invalide ");}
    return 0;
}