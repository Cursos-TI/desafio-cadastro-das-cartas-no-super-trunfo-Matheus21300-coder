#include <stdio.h>



int main() {
   //po=população
   //ntp=número de pontos turisticos 
   //E=estado
   //CO=código da carta
   //No=nome da cidade
   //A=área
   //Pib=PIB

int po1,po2,npt1,npt2;
char E1[15],E2[15],CO1[10],CO2[10],No1[40],No2[40];
float A1,A2,Pib1,Pib2;

//Entrada da primeira carta
printf("***Cadastre a Primeira carta***\n");
printf("Digite o Estado:\n");
scanf("%s" , &E1);
printf("Digite o Código da carta:\n");
scanf("%s" , &CO1);
printf("Digite o Nome da cidade:\n");
scanf("%s" , &No1);
printf("Digite o Número de habitantes:\n");
scanf("%d" , &po1);
printf("Digite a Área da cidade:\n");
scanf("%f" , &A1);
printf("Digite o PIB:\n");
scanf("%f" , &Pib1);
printf("Digite o número de pontos turísticos:\n");
scanf("%d" , &npt1);
printf("\n");

//Entrada da segunda carta
printf("***Cadastre a Segunda carta***\n");
printf("Digite o Estado:\n");
scanf("%s" , &E2);
printf("Digite o Código da carta:\n");
scanf("%s" , &CO2);
printf("Digite o Nome da cidade:\n");
scanf("%s" , &No2);
printf("Digite o Número de habitantes:\n");
scanf("%d" , &po2);
printf("Digite a Área da cidade:\n");
scanf("%f" , &A2);
printf("Digite o PIB:\n");
scanf("%f" , &Pib2);
printf("Digite o número de pontos turísticos:\n");
scanf("%d" , &npt2);
printf("\n");
//calculo de váriaveis DP=densidade populacional  Ppc=PIB per capita
float DP1,DP2,Ppc1,Ppc2;
DP1=po1/A1;
DP2=po2/A2;
Ppc1=Pib1/po1;
Ppc2=Pib2/po2;

//Saída da Primeira Carta
printf("***Dados da Primeira Carta***\n");
printf("Estado:%s\n" ,E1 );
printf("Código:%s\n" ,CO1);
printf("Nome da Cidade:%s\n" ,No1);
printf("População:%d\n" ,po1);
printf("Área:%.2fkm²\n" ,A1);
printf("Pib:%.2f Reais\n" ,Pib1);
printf("Número de Pontos Turísticos:%d\n" ,npt1);
printf("Densidade populacional:%.2f Hab/Km²\n" ,DP1 );
printf("PIB per Capita:%.2f reais\n\n" ,Ppc1);
  

//Saída da Segunda Carta
printf("***Dados da Segunda Carta***\n");
printf("Estado:%s\n" ,E2 );
printf("Código:%s\n" ,CO2);
printf("Nome da Cidade:%s\n" ,No2);
printf("População:%d\n" ,po2);
printf("Área:%.2fkm²\n" ,A2);
printf("Pib:%.2f Reais\n" ,Pib2);
printf("Número de Pontos Turísticos:%d\n" ,npt2);
printf("Densidade populacional:%.2f Hab/Km²\n" ,DP2 );
printf("PIB per Capita:%.2f reais\n\n" ,Ppc2);



return 0;
}
