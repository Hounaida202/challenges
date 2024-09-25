#include <stdio.h>
#include <stdlib.h>

int main() {
int nombre, x1, x2, x3, x4;

    printf("Entrez un nombre entier a 4 chiffres : ");
    scanf("%d", &nombre);

   x1= nombre / 1000;
    x2 = (nombre % 1000) / 100;
    x3= (nombre % 100) / 10;
    x4= nombre % 10;

    printf("Le nombre inverse est : %d%d%d%d\n", x1,x2,x3,x4);

}