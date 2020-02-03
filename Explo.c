#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char foret[15]= "foret";
char montagne[15]= "montagne";
char village[15]= "village";
int dec = 0;
int res;

typedef struct Lieu Lieu;
struct Lieu 
{
	char nom[15];
	char desc[1000];
	int diff;
	int id[2]; 	
};

int main(void)
{
	Lieu lieu1;
	Lieu lieu2;
	Lieu lieu3;

	lieu1.nom = "foret";
	lieu1.desc = "L'inquietante foret de Graiwald, une vague odeur de souffre se fait sentire";
	lieu1.diff = 5;
	lieu1.id = 0;

	lieu2.nom = "montagne";
	lieu2.desc = "Les dangereuses montagnes d'Okberg, une vague odeur de poudre se fait sentire";
	lieu2.diff = 14;
	lieu2.id = 1;

	lieu3.nom = "village";
	lieu3.desc = "Le petit village de Klanburg, une forte odeur de poisson se fait sentire";
	lieu3.diff = 2;
	lieu3.id = 2;

	printf("Vous etes un emissaire de l'Empire Humain\n");
	printf("Vous etes a la recherche d'un homme tres important\n");
	printf("Quel sera votre premier lieu d'investigation ?\n");
	printf("Lieu 1 : La foret de Graiwald\n");
	printf("Lieu 2 : Les montagnes de Hokberg\n");
	printf("Lieu 3 : Le village de Klanburg\n");

return 0;
}
	