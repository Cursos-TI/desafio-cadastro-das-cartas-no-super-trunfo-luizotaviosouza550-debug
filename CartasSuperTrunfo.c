#include <stdio.h>
int main(){
    int população,pontosturísticos;
    float área, PIB;
    char Cidade[50];
    char códigodacarta [45];


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
    scanf("%s",&códigodacarta);

    printf("pontos turísticos: \n");
    scanf("%d",&pontosturísticos);

    printf("\n--- Trunfo ---\n");
    printf("Código da carta: %s - População: %d\n",códigodacarta,população);
    printf("pontos turísticos: %d - área: %f\n",pontosturísticos,área);

    return 0;

}