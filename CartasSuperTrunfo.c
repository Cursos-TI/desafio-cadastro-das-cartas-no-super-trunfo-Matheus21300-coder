#include <stdio.h>
#include <stdlib.h>


int main() {
   //populacao=população da cidade
   //pontos_turisticos=número de pontos turisticos 
   //estado=estado da cidade
   //codigo=código da carta
   //nome=nome da cidade
   //área=Área da cidade
   //Pib=PIB

int populacao1,populacao2,pontos_turisticos1,pontos_turisticos2;
char estado1[15],estado2[15],codigo1[10],codigo2[10],nome1[40],nome2[40];
float area1,area2,Pib1,Pib2;

//Entrada da primeira carta
printf("***Cadastre a Primeira carta***\n");
printf("Digite o Estado:\n");
scanf("%s" , estado1);
printf("Digite o Código da carta:\n");
scanf("%s" , codigo1);
printf("Digite o Nome da cidade:\n");
scanf("%s" , nome1);
printf("Digite o Número de habitantes:\n");
scanf("%d" , &populacao1);
printf("Digite a Área da cidade em Km²:\n");
scanf("%f" , &area1);
printf("Digite o PIB:\n");
scanf("%f" , &Pib1);
printf("Digite o número de pontos turísticos:\n");
scanf("%d" , &pontos_turisticos1);
printf("\n");

//Entrada da segunda carta
printf("***Cadastre a Segunda carta***\n");
printf("Digite o Estado:\n");
scanf("%s" , estado2);
printf("Digite o Código da carta:\n");
scanf("%s" , codigo2);
printf("Digite o Nome da cidade:\n");
scanf("%s" , nome2);
printf("Digite o Número de habitantes:\n");
scanf("%d" , &populacao2);
printf("Digite a Área da cidade em Km²:\n");
scanf("%f" , &area2);
printf("Digite o PIB:\n");
scanf("%f" , &Pib2);
printf("Digite o número de pontos turísticos:\n");
scanf("%d" , &pontos_turisticos2);
printf("\n");


//calculo das váriaveis densidade populacional, PIB per capita e Super poder
float densidade_populacional1,densidade_populacional2,pib_per_capita1,pib_per_capita2;
densidade_populacional1=populacao1/area1;
densidade_populacional2=populacao2/area2;
pib_per_capita1=Pib1/populacao1;
pib_per_capita2=Pib2/populacao2;

//Saída da Primeira Carta
printf("***Dados da Primeira Carta***\n");
printf("Estado:%s\n" ,estado1 );
printf("Código:%s\n" ,codigo1);
printf("Nome da Cidade:%s\n" ,nome1);
printf("População:%d\n" ,populacao1);
printf("Área:%.2fkm²\n" ,area1);
printf("Pib:%.2f Reais\n" ,Pib1);
printf("Número de Pontos Turísticos:%d\n" ,pontos_turisticos1);
printf("Densidade populacional:%.2f Hab/Km²\n" ,densidade_populacional1 );
printf("PIB per Capita:%.2f reais\n\n" ,pib_per_capita1);
  

//Saída da Segunda Carta
printf("***Dados da Segunda Carta***\n");
printf("Estado:%s\n" ,estado2 );
printf("Código:%s\n" ,codigo2);
printf("Nome da Cidade:%s\n" ,nome2);
printf("População:%d\n" ,populacao2);
printf("Área:%.2fkm²\n" ,area2);
printf("Pib:%.2f Reais\n" ,Pib2);
printf("Número de Pontos Turísticos:%d\n" ,pontos_turisticos2);
printf("Densidade populacional:%.2f Hab/Km²\n" ,densidade_populacional2 );
printf("PIB per Capita:%.2f reais\n\n" ,pib_per_capita2);

 // Váriaveis  de menu e comparação
 int opcao1,opcao2,resultado1,resultado2;

 // Menu de escolha do primeiro atributo para comparação
printf("Bem vindo ao Jogo!\n");
printf("Escolha o primeiro atributo para comparar!\n");
printf("1.população\n");
printf("2.Área\n");
printf("3.Pib\n");
printf("4.Número de pontos turisticos\n");
printf("5.Densidade demográfica\n");
scanf("%d", &opcao1);
printf("\n");


//Lógica do primeiro menu
switch (opcao1)
{ case 1:
  if(populacao1==populacao2){resultado1=2;} 
  else{resultado1 = populacao1 > populacao2 ?1:0;} break;
  
  case 2:
  if(area1==area2){resultado1=2;} else{
  resultado1 = area1 > area2 ?1:0;} break;

  case 3:
  if(Pib1==Pib2){resultado1=2;}
  else{resultado1 = Pib1 > Pib2 ?1:0;} break;
   
  case 4:
  if(pontos_turisticos1==pontos_turisticos2){resultado1=2;}
  else{resultado1 = pontos_turisticos1 > pontos_turisticos2 ?1:0;} break;

  case 5:
  if(densidade_populacional1==densidade_populacional2){resultado1=2;}
  else{resultado1 = densidade_populacional1 < densidade_populacional2 ?1:0;} break;

 default: printf("isso não é uma opção"); break;
}


// Menu de escolha do segundo atributo para comparação
printf("Escolha o segundo atributo!\n");
printf("Lembrando que não pode ser o mesmo atributo anterior!\n");
printf("1.população\n");
printf("2.Área\n");
printf("3.Pib\n");
printf("4.Número de pontos turisticos\n");
printf("5.Densidade demográfica\n");
scanf("%d" ,&opcao2);

//Lógica do segundo menu
if (opcao1==opcao2){printf("Você escolheu o mesmo atributo");}
else{  switch (opcao2)
{  case 1:
   if(populacao1==populacao2){resultado2=2;} 
   else{resultado1 = populacao1 > populacao2 ?1:0;} break;
  
   case 2:
   if(area1==area2){resultado2=2;} 
   else{resultado2 = area1 > area2 ?1:0;} break;

   case 3:
   if(Pib1==Pib2){resultado2=2;}
   else{resultado2 = Pib1 > Pib2 ?1:0;} break;
   
   case 4:if(pontos_turisticos1==pontos_turisticos2){resultado2=2;}
   else{resultado2 = pontos_turisticos1 > pontos_turisticos2 ?1:0;} break;

   case 5:if(densidade_populacional1==densidade_populacional2){resultado2=2;}
   else{resultado2 = densidade_populacional1 < densidade_populacional2 ?1:0;} break;

   default: printf("isso não é uma opção"); break;
}}

//Exibição da comparação
switch (opcao1)
{ case 1:
  printf("População da cidade %s:%d\n", nome1,populacao1);
  printf("População da cidade %s:%d\n", nome2,populacao2);
  break;

  case 2:
  printf("Área da cidade %s:%.2fkm²\n", nome1,area1);
  printf("Área da cidade %s:%.2fkm²\n", nome2,area2);
  break;

  case 3:
  printf("Pib da cidade %s:%.2f Reais\n", nome1,Pib1);
  printf("Pib da cidade %s:%.2f Reais\n", nome2,Pib2);
  break;

  case 4:
  printf("Número de pontos turisticos da cidade %s:%d\n", nome1,pontos_turisticos1);
  printf("Número de pontos turisticos da cidade %s:%d\n", nome2,pontos_turisticos2);
  break;

  case 5:
  printf("Densidade populacional da cidade %s:%.2fHab/Km²\n", nome1,densidade_populacional1);
  printf("Densidade populacional da cidade %s:%.2fHab/Km²\n", nome2,densidade_populacional2);
  break;

 default: break; 
}

switch (opcao2)
{ case 1:
  printf("População da cidade %s:%d\n", nome1,populacao1);
  printf("População da cidade %s:%d\n", nome2,populacao2);
  break;

  case 2:
  printf("Área da cidade %s:%.2fkm²\n", nome1,area1);
  printf("Área da cidade %s:%.2fkm²\n", nome2,area2);
  break;

  case 3:
  printf("Pib da cidade %s:%.2f Reais\n", nome1,Pib1);
  printf("Pib da cidade %s:%.2f Reais\n", nome2,Pib2);
  break;

  case 4:
  printf("Número de pontos turisticos da cidade %s:%d\n", nome1,pontos_turisticos1);
  printf("Número de pontos turisticos da cidade %s:%d\n", nome2,pontos_turisticos2);
  break;

  case 5:
  printf("Densidade populacional da cidade %s:%.2fHab/Km²\n", nome1,densidade_populacional1);
  printf("Densidade populacional da cidade %s:%.2fHab/Km²\n", nome2,densidade_populacional2);
  break;

 default: break; 
}

//lógica de resultado
if ((resultado1 == 1 && resultado2 == 0) || (resultado1 == 0 && resultado2 == 1)) {
   printf("empate");
} 
else if (resultado1 == 1 && resultado2 == 1) {
   printf("carta 1 venceu");
} 
else if (resultado1 == 0 && resultado2 == 0) {
   printf("carta 2 venceu");
} 
else if ((resultado1 == 2 && resultado2 == 1) || (resultado1 == 1 && resultado2 == 2)) {
   printf("carta 1 venceu");
} 
else if ((resultado1 == 2 && resultado2 == 0) || (resultado1 == 0 && resultado2 == 2)) {
   printf("carta 2 venceu");
} 
else if (resultado1 == 2 && resultado2 == 2) {
   printf("empate");
} 
else {
   printf("erro");
}




return 0;
}