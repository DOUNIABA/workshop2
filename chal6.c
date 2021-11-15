#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c, delta;
    printf("entrez a et b et c");
    scanf("%f %f %f", &a,&b,&c);
    delta=pow(b,2)-4*a*c;
            if (delta > 0){
                printf("cette equation admet deux solutions :\n");
                float x1=(-b-sqrt(delta))/(2*a);
                float x2=(-b+sqrt(delta))/(2*a);
                      printf("X1: %f \n X2 : %f",x1,x2);
            }
            else if(delta==0){
                float nn = -b/2*a;
                printf("cette equation admet une seule solution:%f",nn );}
                else {
                    printf("l'equation n'a aucune solution");
                }
            
          
    return 0;
}
