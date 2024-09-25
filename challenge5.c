#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t, k;
    printf("entre la temperature : ");
    scanf("%f",&t);
    if(t<0){
        printf("l'eau a cette temperature est solide");
    }
    else if(0<=t &&  t<100){
        printf("l'eau a cette temperature est liquide");
    }
    else{
        printf("l'eau a cette temperature est Gaz");
    }
   
}
