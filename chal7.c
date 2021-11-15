#include <stdio.h>

int main(){
    
    int année,mois,jour,h,min,j,s;
    printf("donnez une années");
    scanf("%d",&an);
    mois=12;
    j=365;
    h = j*24;
    min=h*60;
    s=min*60;
    if(année%4!=0){
        j=366;
        h = j*24;
    min=h*60;
    s=min*60;
      printf("l'année bissextile\n %d mois\n  %d jour \n %d heure \n %d minute %d second ",mois,j,h,min,s);
    }else {
         printf("l'année normal\n %d mois\n  %d jour \n %d heure \n %d minute %d second ",mois,j,h,min,s);
    }
    return 0;
}
