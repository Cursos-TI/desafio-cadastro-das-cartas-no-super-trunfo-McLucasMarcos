#include <stdio.h>

int main(){

float populacao; 
float area;
float pib;
int pontosturisticos;
char codigo[10];
char nome [50];
char estado [5];
float densidadepopulacional;
float pibpercapita;

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


printf("Carta 1:\n");
printf("Estado: %s\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n", nome);
printf("População: %f\n", populacao);
printf("Área: %f km²\n", area);
printf("PIB: %f Bilhões de Reais\n", pib);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
printf("Densidade Populacional: %f hab/km²\n", populacao / area);
printf("PIB per Capita: %f Reais\n", pib / populacao);


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
printf("Estado: %s\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n", nome);
printf("População: %f\n", populacao);
printf("Área: %f km²\n", area);
printf("PIB: %f Bilhões de Reais\n", pib);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
printf("Densidade Populacional: %f hab/km²\n", populacao / area);
printf("PIB per Capita: %f Reais\n", pib / populacao);


return 0;

}
