#include <stdio.h>

int main() {
  char estadoA01[10];
  int habitantes1,turista1;
  float area1,pib1;
  
  char estadoA02[10];
  int habitantes2,turista2;
  float area2,pib2;
  
  
    printf("BEM VINDO AO SUPER TRUNFO DOS ESTADOS!\n");
    printf("VAMOS CADASTAR A CARTA A01\n");
    printf("informe o nome do estado:\n");
    scanf("%s", &estadoA01);
    printf("Estado: %s\n", estadoA01);
    printf("informe o número de habitantes:\n");
    scanf("%d", &habitantes1);
    printf("Habitantes: %d\n", habitantes1);
    printf("informe área do estado:\n");
    scanf("%f", &area1);
    printf("Área: %f\n", area1);
    printf("informe o PIB:\n");
    scanf("%f", &pib1);
    printf("PIB: %f\n", pib1);
    printf("informe quantos pontos turísticos tem:\n");
    scanf("%d", &turista1);
    printf("Pontos turísticos: %d\n", turista1);
    


    
    printf("AGORA VAMOS CADASTRAR A CARTA A02!\n");
    printf("informe o nome do estado:\n");
    scanf("%s", &estadoA02);
    printf("Estado: %s\n", estadoA02);
    printf("informe o número de habitantes:\n");
    scanf("%d", &habitantes2);
    printf("Habitantes: %d\n", habitantes2);
    printf("informe área do estado:\n");
    scanf("%f", &area2);
    printf("Área: %f\n", area2);
    printf("informe o PIB:\n");
    scanf("%f", &pib2);
    printf("PIB: %f\n", pib2);
    printf("informe quantos pontos turísticos tem:\n");
    scanf("%d", &turista2);
    printf("Pontos turísticos: %d\n", turista2);


    return 0;
}
