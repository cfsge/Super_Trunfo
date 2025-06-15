#include <stdio.h>


    int main() {
        printf("Desafio: Super Trunfo - Cidades\n");
// informações da cidade 1
        char estado1[3]; // BA
        char cidade1[20]; //Salvador
        char cod_carta1[10]; // A01
/*Nível novato/Aventureiro
int populacao1; //2568928*/
        unsigned long int populacao1; //nível mestre
        float area_km1; //692,589 km²
        float PIB1; // R$ 62,954 bilhões
        int pontos_turisticos1; //> 50
        float densidade1;
        float pib_per_capita1;

// informações da cidade 2
        char estado2[3]; // PR
        char cidade2 [20];// Curitiba
        char cod_carta2[10];// A02
        unsigned long int populacao2; // 1829225
        float area_km2; // 336,51 km²
        float PIB2; //R$ 98 bilhões,
        int pontos_turisticos2; // > 40;
        float densidade2;
        float pib_per_capita2;
// nível mestre
        float super_poder1, super_poder2;
        int vitoria_populacao, vitoria_area, vitoria_pib, vitoria_pontos;
        int vitoria_densidade, vitoria_pib_per_capita, vitoria_super_poder;

//inserindo dados da carta 1
       printf("Vamos começar?\n");
       printf("Digite o nome da 1ª cidade:\n");
       scanf("%s", cidade1);
       
       printf("Digite o Estado:\n");
       scanf("%s", estado1);
       
       printf("Digite o Código da carta:\n");
       scanf("%s", cod_carta1);
      
       printf("Digite a População:\n");
       scanf("%i", &populacao1);
      
       printf("Digite a Área km²:\n");
       scanf("%f" , &area_km1);
       
       printf("Qual é o PIB?\n");
       scanf("%f" , &PIB1);
       
       printf("A cidade possui quantos pontos turisticos?\n");
       scanf("%i" , &pontos_turisticos1);
       
//Inserindo dados da Carta 2      
       printf("\nAgora vamos preencher a 2ª carta\n");

       printf("Digite o nome da cidade:\n");
       scanf("%s", cidade2);
       
       printf("Digite o Estado:\n");
       scanf("%s", estado2);
  
       printf("Digite o Código da carta:\n");
       scanf("%s", cod_carta2);
       
       printf("Digite a População:\n");
       scanf("%i", &populacao2);
      
       printf("Digite a Área km²:\n");
       scanf("%f" , &area_km2);
       
       printf("Qual é o PIB?\n");
       scanf("%f" , &PIB2);
     
       printf("A cidade possui quantos pontos turisticos?\n");
       scanf("%i" , &pontos_turisticos2);
      
//Nível Aventureiro
// Cálculos Carta 2
       densidade1 = populacao1/area_km1;
       pib_per_capita1 = PIB1/populacao1; 

// Cálculos Carta 2
       densidade2 = populacao2/area_km2;
       pib_per_capita2 = PIB2/populacao2;  

// Nível Mestre
// Calculo do super poder
       super_poder1 =(1 /densidade1) + populacao1 + area_km1 + PIB1 + pontos_turisticos1 + pib_per_capita1;
       super_poder2 =(1 /densidade2) + populacao2 + area_km2 + PIB2 + pontos_turisticos2 + pib_per_capita2;

vitoria_populacao = populacao1 > populacao2;
vitoria_area = area_km1 > area_km2;
vitoria_pib = PIB1 > PIB2;
vitoria_pontos = pontos_turisticos1 > pontos_turisticos2;
vitoria_densidade = densidade1 < densidade2;
vitoria_pib_per_capita = pib_per_capita1 > pib_per_capita2;
vitoria_super_poder = super_poder1 > super_poder2;

//informações digitadas para a primeira carta
       printf("\n*****Primeira Carta:*****\n %s-%s-%s\n", cod_carta1, cidade1, estado1 );
       printf("População: %d habitantes\n", populacao1);
       printf("Área km²: %.2f Km²\n" , area_km1);
       printf("PIB: %.2f Bilhões\n", PIB1);
       printf("Pontos Turisticos: %i \n", pontos_turisticos1);
       printf("Densidade Populacional: %6.f\n", densidade1);
       printf("PIB per Capita: %.2f\n",pib_per_capita1);
       printf("Super Poder: %.2f\n", super_poder1);    

//informações digitadas para a segunda carta
       printf("\n*****Segunda Carta:*****\n %s-%s-%s\n", cod_carta2, cidade2, estado2 );
       printf("População: %d habitantes \n", populacao2);
       printf("Área km²: %.2f Km²\n" , area_km2);
       printf("PIB: %.2f Bilhões\n", PIB2);
       printf("Pontos Turisticos: %i \n", pontos_turisticos2);
       printf("Densidade Populacional: %6.f\n", densidade2);
       printf("PIB per Capita: %.2f\n",pib_per_capita2);
       printf("Super Poder: %.2f\n", super_poder2);

// comparação das cartas
       printf("\n***** Resultado ***** \n");
       printf("População:%d\n", vitoria_populacao);
       printf("Área: %d\n",vitoria_area);
       printf("PIB: %d\n", vitoria_pib);
       printf("Pontos Turísticos: %d\n", vitoria_pontos);
       printf("Densidade Populacional (menor vence): %d\n", vitoria_densidade);
       printf("PIB per Capita: %d\n", vitoria_pib_per_capita);
       printf("Super Poder: %d\n", vitoria_super_poder);
//nível mestre 
// Super Poderes
printf("\n*****  Resultado dos Super Poderes *****\n");
printf("Super Poder da Carta 1: %.2f\n", super_poder1);
printf("Super Poder da Carta 2: %.2f\n", super_poder2);

// Comparação final
printf("\n***** Resultado Final *****\n");
if (super_poder1 > super_poder2) {
    printf("A Carta 1 vence com maior Super Poder!\n");
} else if (super_poder2 > super_poder1) {
    printf("A Carta 2 vence com maior Super Poder!\n");
} else {
    printf("Empate de Super Poder!\n");
}
       

return 0;

}


