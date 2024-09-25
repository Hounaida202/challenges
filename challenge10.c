#include <stdio.h>
#include <stdlib.h>

int main() {
float r,v;

printf("entrez le rayon de votre sphere :");
scanf("%f",&r);

v = (3.0/4.0) * 3.14 * pow(r,3);
printf("le volume de votre sphere est %f m³",v);
}