#include <stdio.h>



















int main() {


int choix;

printf("Choisissez votre destination :\n La ville[1]\n Le lac[2]\n");
scanf("%d", &choix);

if (choix == 1) {
printf("Vous arrivez dans la petite bourgade de Rennes !\n");

}

if (choix == 2) {
printf("Vous arrivez au lac Saint-Josianne !\n");

}



















return 0;
}