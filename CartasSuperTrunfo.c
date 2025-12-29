
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>


int main(){

// Variaveis carta 1

char letra_estado ;
char codigo_da_carta [10] ;
char nome_da_cidade [50] ;
int populacao ;
float area ;
float pib_valor;
char pib_unidade [15];
int pontos_turisticos ;

// Variaveis carta 2

char letra_estado2 ;
char codigo_da_carta2 [10] ;
char nome_da_cidade2 [50] ;
int populacao2 ;
float area2 ;
float pib_valor2 ;
char pib_unidade2 [15] ;
int pontos_turisticos2 ;
 

//-------------------------------------------------------------------------------------------------------------//


// --- CADASTRANDO A CARTA ---
// Entrada de dados das cartas


//-------------------------------------------------------------------------------------------------------------//


// Carta 1


//-------------------------------------------------------------------------------------------------------------//


// Estado
printf ( "Digite a primeira letra do seu estado (A-H): \n" );
scanf  ( " %c", &letra_estado );

while(getchar() != '\n');

// Código da carta
printf ( "Digite o codigo da sua carta (ex: A01): \n" );
scanf  ( " %s", codigo_da_carta );

while(getchar() != '\n');

// Nome da Cidade
printf ( "Digite o nome da sua cidade: \n" );
scanf  ( " %[^\n]s", nome_da_cidade );

while(getchar() != '\n');

// Populacao 
printf ( "Qual a quantidade de populacao da sua cidade? \n" );
scanf  ( " %d", &populacao );

while(getchar() != '\n');

// Área em Km2
printf ( "Qual seria a quantidade da cidade em quilometros quadrados? \n" );
scanf  ( " %f", &area );

while(getchar() != '\n');

// PIB
printf ( "Digite o PIB e a unidade (ex: 3.44 Bilhoes):  \n" );
scanf  ( " %f %s", &pib_valor, pib_unidade );

while(getchar() != '\n');

// Pontos Turísticos 
printf ( "Quantos pontos turisticos possuem a sua cidade? \n" );
scanf  ( " %d", &pontos_turisticos );

while(getchar() != '\n');


//-------------------------------------------------------------------------------------------------------------//


// Carta 2


//-------------------------------------------------------------------------------------------------------------//

printf("\n--- AGORA DIGITE OS DADOS DA CARTA 2 ---\n");


//Estado
printf ( "Digite a primeira letra do seu estado (A-H): \n" );
scanf  ( " %c", &letra_estado2 );

while(getchar() != '\n');

// Código da carta
printf ( "Digite o codigo da sua carta (ex: A01): \n" );
scanf  ( " %s", codigo_da_carta2 );

while(getchar() != '\n');

// Nome da Cidade
printf ( "Digite o nome da sua cidade: \n" );
scanf  ( " %[^\n]s", nome_da_cidade2 );

while(getchar() != '\n');

// Populacao 
printf ( "Qual a quantidade de populacao da sua cidade? \n" );
scanf  ( " %d", &populacao2 );

while(getchar() != '\n');

// Área em Km2
printf ( "Qual seria a quantidade da cidade em quilometros quadrados? \n" );
scanf  ( " %f", &area2 );

while(getchar() != '\n');

// PIB
printf ( "Digite o PIB e a unidade (ex: 3.44 Bilhoes):  \n" );
scanf  ( " %f %s", &pib_valor2, pib_unidade2 );

while(getchar() != '\n');

// Pontos Turísticos 
printf ( "Quantos pontos turisticos possuem a sua cidade? \n" );
scanf  ( " %d", &pontos_turisticos2 );

while(getchar() != '\n');


//-------------------------------------------------------------------------------------------------------------//



// Exibindo as duas cartas - Saida de dados


//-------------------------------------------------------------------------------------------------------------//

printf ("\n--- O SUPER TRUNFO ---\n");

printf("\nCarta 1:\n");

printf("---------------------------------------------------------------\n");


printf ( "Primeira letra do Estado: %c \n", letra_estado );

printf ( "Codigo da carta: %s \n", codigo_da_carta );

printf ( "Nome da cidade: %s \n", nome_da_cidade );

printf ( "Populacao %d \n", populacao );

printf ( "Area %.2f \n", area );

printf("PIB: %.2f %s de reais\n", pib_valor, pib_unidade);

printf ( "Pontos turisticos %d \n", pontos_turisticos );


//-------------------------------------------------------------------------------------------------------------//


printf("\nCarta 2:\n");

printf("---------------------------------------------------------------\n");


printf ( "Primeira letra do Estado: %c \n", letra_estado2 );

printf ( "Codigo da carta: %s \n", codigo_da_carta2 );

printf ( "Nome da cidade: %s \n", nome_da_cidade2 );

printf ( "Populacao %d \n", populacao2 );

printf ( "Area %.2f \n", area2 );

printf("PIB: %.2f %s de reais\n", pib_valor2, pib_unidade2);

printf ( "Pontos turisticos %d \n", pontos_turisticos2 );


// Fim do Programa//

//-------------------------------------------------------------------------------------------------------------//

return 0;

}

