#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[1000];
    int vogais = 0;

    printf("Digite um texto (pressione Enter no final):\n");
    fgets(texto, sizeof(texto), stdin);

    for (int i = 0; texto[i] != '\0'; i++) {
        char caractere = tolower(texto[i]); // Converte o caractere para minúsculo antes de verificar se é vogal
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            vogais++;
        }
    }

    printf("Número de vogais no texto: %d\n",
