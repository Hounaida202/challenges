#include <stdio.h>
int main(){
char nom[50];
char prenom[50];
char sexe[50];
char adresse[50];
int age;
printf("donnez votre nom:");
scanf("%s",&nom);
printf("donnez votre prenom:");
scanf("%s",&prenom);
printf("donnez votre sexe:");
scanf("%s",&sexe);
printf("donnez votre adresse:");
scanf("%s",&adresse);
printf("donnez votre age:");
scanf("%d",&age);

printf("votre nom est %s",nom);
printf("votre prenom est %s",prenom);
printf("votre sexe est %s",sexe);
printf("votre adresse est %s",adresse);
printf("votre nom est %d",age);


}