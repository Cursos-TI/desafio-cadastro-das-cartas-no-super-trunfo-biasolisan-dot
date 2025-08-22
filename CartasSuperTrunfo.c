#include <stdio.h>

int main(){
    printf("Desafio Xadrez! \n");

    char estado[50];
    int codigoestado;
    char cidade[50];
    int populacao;
    int area;
    int PIB;
    int pontosturisticos;

        printf("Digite o estado:    \n");
        scanf("%s",estado);
        
       printf("Codigo do estado: \n");
       scanf("%d", &codigoestado);

        printf("Digite o nome da cidade:     \n");
        scanf("%s", cidade);

        printf("digite o numero da populacao:   \n" );
        scanf("%d", &populacao);

        printf("Digite a area:    \n");
        scanf("%d", &area);

        printf("Digite o PIB:    \n");
        scanf("%d", &PIB );

        printf("Digite o numero de pontos turisticos:   \n");
        scanf("%d", &pontosturisticos); 
       
        printf(" estado %s ", estado);
        printf("codigoestado %d", codigoestado);
        printf("cidade %s ", cidade);
        printf("populacao %d ", populacao);       
        printf("area %d ", area);
        printf("PIB %d", PIB);
        printf("pontosturisticos %d" - pontosturisticos);
            
return 0;

}   

         