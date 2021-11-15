#include <stdio.h>
#include <math.h>

int main()
{
   float temp ;
   printf("donnez");
   scanf("%f",&temp);
   
   if(temp<=0){
       printf("glace");
   }else if(temp> 0 && temp <=100){
       printf("eau");
   } else if(temp> 100){
       printf("VAPEUR");
   }       
          
    return 0;
}