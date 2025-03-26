#include <stdio.h>



int main() {
   //populacao=população
   //pontos_turisticos=número de pontos turisticos 
   //estado=Estado da cidade
   //codigo=Código da carta
   //nome=Nome da cidade
   //area=Área da cidade
   //Pib=PIB

int populacao1,populacao2,pontos_turisticos1,pontos_turisticos2;
char estado1[10],estado2[10],codigo1[3],codigo2[3],nome1[20],nome2[20];
float area1,area2,Pib1,Pib2;

//Entrada da primeira carta
printf("***Cadastre a Primeira carta***\n");
printf("Digite o Estado:\n");
scanf("%s" , &estado1);
printf("Digite o Código da carta:\n");
scanf("%s" , &codigo1);
printf("Digite o Nome da cidade:\n");
scanf("%s" , &nome1);
printf("Digite o Número de habitantes:\n");
scanf("%d" , &populacao1);
printf("Digite a Área da cidade:\n");
scanf("%f" , &area1);
printf("Digite o PIB:\n");
scanf("%f" , &Pib1);
printf("Digite o número de pontos turísticos:\n");
scanf("%d" , &pontos_turisticos1);
printf("\n");

//Entrada da segunda carta
printf("***Cadastre a Segunda carta***\n");
printf("Digite o Estado:\n");
scanf("%s" , &estado2);
printf("Digite o Código da carta:\n");
scanf("%s" , &codigo2);
printf("Digite o Nome da cidade:\n");
scanf("%s" , &nome2);
printf("Digite o Número de habitantes:\n");
scanf("%d" , &populacao2);
printf("Digite a Área da cidade:\n");
scanf("%f" , &area2);
printf("Digite o PIB:\n");
scanf("%f" , &Pib2);
printf("Digite o número de pontos turísticos:\n");
scanf("%d" , &pontos_turisticos2);
printf("\n");

//Saída da Primeira Carta
printf("***Dados da Primeira Carta***\n");
printf("Estado:%s\n" ,estado1 );
printf("Código:%s\n" ,codigo1);
printf("Nome da Cidade:%s\n" ,nome1);
printf("População:%d\n" ,populacao1);
printf("Área:%2.fkm²\n" ,area1);
printf("Pib:%2.f Reais\n" ,Pib1);
printf("Número de Pontos Turísticos:%d\n\n" ,pontos_turisticos1);
  

//Saída da Segunda Carta
printf("***Dados da Segunda Carta***\n");
printf("Estado:%s\n" ,estado2 );
printf("Código:%s\n" ,codigo2);
printf("Nome da Cidade:%s\n" ,nome2);
printf("População:%d\n" ,populacao2);
printf("Área:%2.fkm²\n" ,area2);
printf("Pib:%2.f Reais\n" ,Pib2);
printf("Número de Pontos Turísticos:%d\n" ,pontos_turisticos2);



return 0;
}
teste