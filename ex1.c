#include <stdio.h>

int main() {
    char c;
    FILE *arquivo;

    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite os caracteres para serem gravados no arquivo:");

    while (1) {
        scanf(" %c", &c); 
        if (c == '0') {
            break;
        }
        fputc(c, arquivo);
    }

    fclose(arquivo);

    arquivo = fopen("arq.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");

    while ((c = fgetc(arquivo)) != EOF) {
        putchar(c);
    }

    fclose(arquivo);

    return 0;
}
