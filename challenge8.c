#include <stdio.h>
#include <stdlib.h>

int main() {
float x,y,z,m;

printf("tapez le premier nombre:");
scanf("%f",&x);
printf("tapez le deuxieme nombre:");
scanf("%f",&y);
printf("taper le troisieme nombre :");
scanf("%f",&z);

m = pow((x * y * z),(1.0/3.0));


printf("la moyenne geometrique est %f ",m);

}