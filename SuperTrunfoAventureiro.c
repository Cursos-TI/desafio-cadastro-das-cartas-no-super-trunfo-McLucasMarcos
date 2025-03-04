#include <stdio.h>

int main(){

float populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosturisticos1, pontosturisticos2;
char codigo[10];
char nome [50];
char estado [5];
float densidadepopulacional1, densidadepopulacional2;
double pibpercapita1, pibpercapita2;
float poder1, poder2;

printf("Digite o estado:\n");
scanf("%s", &estado);

printf("Digite o Código:\n");
scanf("%s", &codigo);

printf("Digite o nome da cidade:\n");
scanf("%s", &nome);

printf("Digite a população:\n");
scanf("%f", &populacao1);

printf("Digite a área:\n");
scanf("%f", &area1);

printf("Digite o PIB:\n");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontosturisticos1);


printf("Carta 1:\n");
printf("Estado: %s\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n", nome);
printf("População: %f\n", populacao1);
printf("Área: %f km²\n", area1);
printf("PIB: %f Bilhões de Reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
printf("Densidade Populacional: %f hab/km²\n", populacao1 / area1);
printf("PIB per Capita: %f Reais\n", pib1 / populacao1);
printf("Super Poder: %f\n", poder1 = populacao1 + area1 + pib1 + pontosturisticos1 + densidadepopulacional1 + pibpercapita1);


printf("Digite o estado:\n");
scanf("%s", &estado);

printf("Digite o Código:\n");
scanf("%s", &codigo);

printf("Digite o nome da cidade:\n");
scanf("%s", &nome);

printf("Digite a população:\n");
scanf("%f", &populacao2);

printf("Digite a área:\n");
scanf("%f", &area2);

printf("Digite o PIB:\n");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontosturisticos2);


printf("Carta 2:\n");
printf("Estado: %s\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n", nome);
printf("População: %f\n", populacao2);
printf("Área: %f km²\n", area2);
printf("PIB: %f Bilhões de Reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
printf("Densidade Populacional: %f hab/km²\n", populacao2 / area2);
printf("PIB per Capita: %f Reais\n", pib2 / populacao2);
printf("Super Poder: %f\n", poder2 = populacao2 + area2 + pib2 + pontosturisticos2 + densidadepopulacional2 + pibpercapita2);

printf("Carta 1 - População de Fortaleza: %f\n", populacao1);
printf("Carta 2 - População de Manaus: %f\n", populacao2);
if (populacao1 > populacao2)
{
    printf("Resultado: Carta 1 Venceu\n");
}
else{
    printf("Resultado: Carta 2 Venceu\n");
}

printf("Carta 1 - Área de Fortaleza: %f\n", area1);
printf("Carta 2 - Área de Manaus: %f\n", area2);
if (area1 > area2)
{
    printf("Resultado: Carta 1 Venceu\n");
}
else{
    printf("Resultado: Carta 2 Venceu\n");
}

printf("Carta 1 - PIB de Fortaleza: %f\n", pib1);
printf("Carta 2 - PIB de Manaus: %f\n", pib2);
if (pib1 > pib2)
{
    printf("Resultado: Carta 1 Venceu\n");
}
else{
    printf("Resultado: Carta 2 Venceu\n");
}


return 0;

}
