#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv){

    float c;

    printf("Temperature en F : \n");
    scanf("%f", &c);

    c = (c - 32) * 5/9;

    printf("Temperature en C : %f\n", c);
    if (c< 0)
        printf("Temperature très froid\n");
    else if (c< 20)
        printf("Temperature froid\n");
    else if (c < 30)
        printf("Temperature chaud\n");
    else
        printf("Temperature très chaud\n");

    return 0;
} 