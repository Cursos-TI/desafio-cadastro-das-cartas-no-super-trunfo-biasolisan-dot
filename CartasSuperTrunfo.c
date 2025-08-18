#include <stdio.h>
    int main(){
               
          int idade, matricula;
          float altura;
          char nome[50];

          printf("Digite sua idade:    \n");
          scanf("%d", &idade);

          printf("Digite sua altura:    \n");
          scanf("%2f", &altura);

          printf("Digite seu nome:    \n");
          scanf("%s", &nome);


          printf("Digite sua matrícula:     \n");
          scanf( "%d", &matricula );

              printf("nome do aluno: %s - matricula: %d", nome, matricula);

              printf("idade: %d - altura: %2f", idade, altura);

              return 0;

    }


