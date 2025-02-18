#include <stdio.h>

int main(){

float populacao; 
float area;
float pib;
int pontosturisticos;
char codigo[10];
char nome [50];
char estado [5];

printf("Digite o estado:\n");
scanf("%s", &estado);

printf("Digite o Código:\n");
scanf("%s", &codigo);

printf("Digite o nome da cidade:\n");
scanf("%s\n", &nome);

printf("Digite a população:\n");
scanf("%f", &populacao);

printf("Digite a área:\n");
scanf("%f", &area);

printf("Digite o PIB:\n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontosturisticos);


printf("Carta 1:\n");
printf("Estado:\n", estado);
printf("Nome da Cidade\n", nome);
printf("População:\n", populacao);
printf("Área:\n", area);
printf("PIB:\n", pib);
printf("Número de Pontos Turísticos:\n", pontosturisticos);

printf("Digite o estado:\n");
scanf("%s", &estado);

printf("Digite o Código:\n");
scanf("%s", &codigo);

printf("Digite o nome da cidade:\n");
scanf("%s", &nome);

printf("Digite a população:\n");
scanf("%f", &populacao);

printf("Digite a área:\n");
scanf("%f", &area);

printf("Digite o PIB:\n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontosturisticos);

printf("Carta 2:\n");
printf("Estado:\n", estado);
printf("Nome da Cidade\n", nome);
printf("População:\n", populacao);
printf("Área:\n", area);
printf("PIB:\n", pib);
printf("Número de Pontos Turísticos:\n", pontosturisticos);



return 0;

}
