#include <stdio.h>
int main(){
    int população,pontos;
    float área, PIB;
    char Cidade[50];
    char código [45];


    printf("Digite o número de habitantes: \n");
    scanf("%d", &população);
// população

    printf("Digite a sua área: \n");
    scanf("%f", &área);

    printf("digite seu PIB: \n");
    sacanf("%f", &PIB);

    printf("Digite sua cidade: \n");
    scanf("%s", Cidade);

    printf("Digite seu Estado: \n");
    scanf("%s",&código);

    printf("pontos turísticos: \n");
    scanf("%d",&pontos);

    printf("\n--- Trunfo ---\n");
    printf("Código da carta: %s - População: %d\n",código,população);
    printf("pontos turísticos: %d - área: %f\n",pontos,área);

    return 0;

}