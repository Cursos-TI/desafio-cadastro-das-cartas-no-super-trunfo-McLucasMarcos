#include <stdio.h>

int main(){

int nome;
float populacao;
float area;
float PIB;
int turisticos;
char codigo[10];

printf("Digite o nome da cidade: \n");
scanf("%d", &nome);

printf("Digite a Populacao: \n");
scanf("%f", &populacao);

printf("Digite a area da cidade: \n");
scanf("%f", &area);

printf("Digite o pib da cidade: \n");
scanf("%f", &PIB);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &turisticos);

printf("Digite o Codigo da Cidade: \n");
scanf("%c", &codigo);

return 0;


}
