#include <stdio.h>
#include <stdlib.h>


struct Chapitre {
	char nmlieu[30];
	char descrpt[1000]; 
	int gainor;
	int gainpv;
	int id;
};



typedef struct Chapitre Chapitre;



Chapitre chap1 = {"Rennes", "Une ville paisible au bord d'un lac, avec des habitants aimables, pret a vous aider peu importe le danger.", 10, 10, 1};
Chapitre chap2 = {"Lac Saint-Josianne", "Le lac Saint-Josianne est connu pour abriter de nombreuses especes de poissons rares !", 10, 10, 2};
Chapitre chap3 = {"Bois Magique","Bien qu'on disent de se bois qu'il es magique, la plupart des legende lui faisent reference s'avere fausse.", 10, 10, 3};
Chapitre chap4 = {"Chemin des Elfes","", 10, 10, 3};
Chapitre chap5 = {"Route de la colline","", 10, 10, 3};
Chapitre chap6 = {"Vue Imprenable","", 10, 10, 3};
Chapitre chap7 = {"Le vieux van","", 10, 10, 3};
Chapitre chap8 = {"Le village des Elfes genils","", 10, 10, 3};
Chapitre chap9 = {"Fuire","", 10, 10, 3};
Chapitre chap10 = {"Rester diner","", 10, 10, 3};
Chapitre chap11 = {"","", 10, 10, 3};
Chapitre chap12 = {"","", 10, 10, 3};







int main() {

int fin;
int pv = 100;
int argent = 0;
int deplacement;

printf("C'est ici que votre roadtrip a travers le monde de SugarLand commence !\n");
printf("Choisissez votre destination :\n %s[1]\n %s[2]\n", chap1.nmlieu, chap2.nmlieu);
scanf("%d", &deplacement);	
	



while (fin != 1) {

if (deplacement == chap1.id) {
printf("Vous arrivez dans la petite bourgade de %s !\n", chap1.nmlieu);
printf("%s\n", chap1.descrpt);
printf("Vous appercevez un bois derriere une des maison au limites de la ville. \n %s[2]\n %s[3]\n", chap2.nmlieu, chap3.nmlieu);
	while (deplacement != chap2.id || deplacement != chap3.id) {
	scanf("%d", &deplacement);	
	}

}

if (deplacement == chap2.id) {
printf("Vous arrivez au %s !\n", chap2.nmlieu);
printf("%s\n", chap2.descrpt);
printf("Vous appercevez un bois derriere la ville qui borde le lac. Un chemin mene vers une colline eloigne. \n %s[1]\n %s[3]\n %s[5]\n", chap1.nmlieu, chap3.nmlieu, chap5.nmlieu);
	while (deplacement != chap1.id || deplacement != chap3.id || deplacement != chap5.id) {
	scanf("%d", &deplacement);	
	}

}

if (deplacement == chap3.id) {
printf("Vous arrivez dans le %s !\n", chap3.nmlieu);
printf("%s\n", chap3.descrpt);
printf("Vous passer devant un sentier fort attrayant. De petites creature semble l'emprunter regulierement. \n %s[1]\n %s[2]\n %s[4]\n", chap1.nmlieu, chap2.nmlieu, chap4.nmlieu);
	while (deplacement != chap1.id || deplacement != chap2.id || deplacement != chap4.id) {
	scanf("%d", &deplacement);	
	}

}

		if (deplacement == 42) {
		fin = 1;
			}
}

















return 0;
}