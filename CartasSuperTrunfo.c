#include <stdio.h>
//Rodolfo Cesar
//meu desafio do cadastro das cartas do super trunfo! 

int main() {

//variáveis declaradas e inicializadas! 

char nomedacidade[50]="nenhum!" ;
int populacao = 0 ;
int numerodepontos = 0 ;
float area = 0.000; 
float PIB = 0.000;
float densipopulacional = 0.000;
float PIBpercapita = 0.000;

// sitema de entrada e saída de dados

printf("Qual o nome da cidade? \n ");
printf("Sua resposta: ");
scanf("%s", &nomedacidade );

printf("\nQual o número da população da cidade? \n ");
printf("Sua resposta: ");
scanf("%d", &populacao );


printf("\nQuantos pontos turísticos a cidade tem? \n ");
printf("Sua resposta: ");
scanf("%d", &numerodepontos );

printf("\nQual a área da cidade? \n ");
printf("Sua resposta: ");
scanf("%f", &area );

printf("\nQual o PIB da cidade?  \n");
printf("Sua resposta: ");
scanf("%f", &PIB );

//calculo da densidade populacional e PIB per capita
densipopulacional = populacao / area ;
PIBpercapita = PIB / populacao;


//resultado

printf("\n\nNome da cidade: %s \nPopulação: %d \nNúmero de pontos turísticos: %d \nÁrea da cidade: %.2f Km² \nDensidade populacional: %.2f por km² \nPIB: %.2f \nPIB per capita: %.2f \n\n ", nomedacidade, populacao, numerodepontos, area, densipopulacional,  PIB, PIBpercapita );


//novo commit
printf("\n\n novo commit");






    return 0;
}
