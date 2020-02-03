#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char foret[15]= "foret";
char montagne[15]= "montagne";
int dec = 0;
int res;

int main(void)
{
	printf("Vous etes un soldat de l'Empire Humain\n");
	printf("Vous etes a la recherche d'un homme tres important\n");
	printf("Quel sera votre premier lieu d'investigation ?\n");
	printf("La foret de Grauwald ?\n");
	printf("Les montagnes de Hokberg ?\n");
	res = scanf("%d", &dec);
  if (dec == 1)
  {
    printf("Vous arrivez dans la foret de Grauwald\n");
    printf("Vous sentez une vague odeur de souffre\n");
  }
  if (dec == 2) 
  {
    printf("Vous arrivez dans les montagnes de Hokberg\n");
    printf("Vous sentez une vague odeur de poudre");
  }

}