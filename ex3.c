#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_alunos = 3;  
    char nome_arquivo[100];

    for (int i = 0; i < num_alunos; i++) {
        int numero;
        char nome[100];
        char curso[100];
        float nota1, nota2;

        printf("Aluno %d\n", i + 1);
        printf("Número: ");
        scanf("%d", &numero);
        printf("Nome: ");
        scanf(" %[^\n]", nome); 
        printf("Curso: ");
        scanf(" %[^\n]", curso);
        printf("Nota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2: ");
        scanf("%f", &nota2);

        snprintf(nome_arquivo, sizeof(nome_arquivo), "%s.txt", nome);

        FILE *arquivo = fopen(nome_arquivo, "w");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }

        fprintf(arquivo, "Número: %d\n", numero);
        fprintf(arquivo, "Nome: %s\n", nome);
        fprintf(arquivo, "Curso: %s\n", curso);
       
