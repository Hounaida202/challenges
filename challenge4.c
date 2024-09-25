#include <stdio.h>
int main(){

double m,km;
printf("veuillez entrer la vitesse en km/h:");
scanf("%lf",&km);
m = km * 0.27778;
printf("la vitesse en m/s est %.2lf ",m);
}