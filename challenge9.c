#include <stdio.h>
#include <stdlib.h>

int main() {
float x1,x2,y1,y2,z1,z2,distance;

printf("entrez le x du premier point :");
scanf("%f",&x1);
printf("entrez le y du premier point :");
scanf("%f",&y1);
printf("entrez le z du premier point :");
scanf("%f",&z1);
printf("entrez le x du deuxieme point :");
scanf("%f",&x2);

printf("entrez le y du deuxieme point :");
scanf("%f",&y2);


printf("entrez le z du deuxieme point :");
scanf("%f",&z2);

distance= sqrt(pow((x1-x2),2) + pow((y1-y2),2) + pow((z1-z2),2));


printf("la distance entre les 2 points est %f ",distance);
}
