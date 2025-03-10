#include <stdio.h>

int main(){

int escolha;
float populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosturisticos1, pontosturisticos2;
char nome [50];
float densidadepopulacional1, densidadepopulacional2;

printf("### Jogo Super Trunfo ###\n");
printf("Escolha um atributo para comparação: \n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Densidade Demográfica\n");
printf("5. Sair do jogo\n");
printf("Escolha: \n");
scanf("%d", &escolha);

switch (escolha)
{
case 1:
printf("Digite a população da carta 1: \n");
scanf("%f", &populacao1);
printf("Digite a população da carta 2: \n");
scanf("%f", &populacao2);
if (populacao1 > populacao2)
{
printf("Fortaleza vs Manaus\n");
printf("Atributo: População\n");
printf("População de fortaleza: %f\n", populacao1);
printf("População de Manaus: %f\n", populacao2);
printf("Carta 1 Venceu!\n");
} else if (populacao1 < populacao2)
{
printf("Fortaleza vs Manaus\n");
printf("Atributo: População\n");
printf("População de fortaleza: %f\n", populacao1);
printf("População de Manaus: %f\n", populacao2);
printf("Carta 2 Venceu!\n");
} else{
    printf("Empate!\n");
}
break;
case 2:
printf("Digite a área da carta 1: \n");
scanf("%f", &area1);
printf("Digite a área da carta 2: \n");
scanf("%f", &area2);
if (area1 > area2)
{
printf("Fortaleza vs Manaus\n");
printf("Atributo: Área\n");
printf("Área de fortaleza: %f\n", area1);
printf("Área de Manaus: %f\n", area2);
printf("Carta 1 Venceu!\n");
} else if (area1 < area2)
{
printf("Fortaleza vs Manaus\n");
printf("Atributo: Área\n");
printf("Área de fortaleza: %f km²\n", area1);
printf("Área de Manaus: %f km²\n", area2);
printf("Carta 2 Venceu!\n");
}
break;
case 3:
printf("Digite o PIB da carta 1: \n");
scanf("%f", &pib1);
printf("Digite o PIB da carta 2: \n");
scanf("%f", &pib2);
if (pib1 > pib2)
{
printf("Fortaleza vs Manaus\n");
printf("Atributo: PIB\n");
printf("PIB de fortaleza: %f - Reais\n", pib1);
printf("PIB de Manaus: %f - Reais\n", pib2);
printf("Carta 1 Venceu!\n");
} else if (pib1 < pib2)
{
printf("Fortaleza vs Manaus\n");
printf("Atributo: PIB\n");
printf("PIB de fortaleza: %f\n", pib1);
printf("PIB de Manaus: %f\n", pib2);
printf("Carta 2 Venceu!\n");
}
break;
case 4:
printf("Digite a densidade demográfica da carta 1: \n");
scanf("%f", &densidadepopulacional1);
printf("Digite a densidade demográfica da carta 2: \n");
scanf("%f", &densidadepopulacional2);
if (densidadepopulacional1 < densidadepopulacional2)
{
printf("Fortaleza vs Manaus\n");
printf("Atributo: Densidade Demográfica\n");
printf("Densidade demográfica de fortaleza: %f\n", densidadepopulacional1);
printf("Densidade demográfica de Manaus: %f\n", densidadepopulacional2);
printf("Carta 1 Venceu!\n");
} else if (densidadepopulacional1 > densidadepopulacional2)
{
printf("Fortaleza vs Manaus\n");
printf("Atributo: Densidade Demográfica\n");
printf("Densidade demográfica de fortaleza: %f\n", densidadepopulacional1);
printf("Densidade demográfica de Manaus: %f\n", densidadepopulacional2);
printf("Carta 2 Venceu!\n");
}
break;
case 5: 
printf("Saindo do jogo...\n");
break;
default:
printf("Opção Inválida\n");
    break;
}

return 0;

}